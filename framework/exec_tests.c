/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 11:18:30 by dnakano           #+#    #+#             */
/*   Updated: 2021/05/14 10:53:49 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** printf should be replaced!!
*/

#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include "libunit.h"

/*
**  create timer process and return pid of it
*/

static pid_t	settimer(int time_sec)
{
	pid_t	pid;

	pid = fork();
	if (pid == 0)
		exit(usleep(time_sec * 1000));
	return (pid);
}

/*
**  create timer process and return pid of it
**	returns...
**		0 on Success fully caught the testing process
**		1 on Timeout
**		-1 on Error
*/

static int	wait_result(pid_t pid, int *status)
{
	pid_t	pid_timer;
	pid_t	pid_ret;

	pid_timer = settimer(LIBUNIT_TIMEOUT_MSEC);
	if (pid_timer == -1)
	{
		kill(pid, SIGKILL);
		wait(status);
		return (-1);
	}
	pid_ret = wait(status);
	if (pid_ret == pid_timer)
	{
		kill(pid, SIGKILL);
		wait(status);
		return (1);
	}
	kill(pid_timer, SIGKILL);
	wait(NULL);
	return (0);
}

/*
**  Check TERM signals and output results
**  Return 1: caught signal and put result
**  Return 0: put NO result (should continue)
*/

static int	check_signal(int status)
{
	if (WTERMSIG(status) == SIGSEGV)
		printf("%s[SEGV]%s\n", LIBUNIT_TEXT_RED, LIBUNIT_TEXT_RESET);
	else if (WTERMSIG(status) == SIGBUS)
		printf("%s[BUSE]%s\n", LIBUNIT_TEXT_RED, LIBUNIT_TEXT_RESET);
	else if (WTERMSIG(status) == SIGPIPE)
		printf("%s[PIPE]%s\n", LIBUNIT_TEXT_RED, LIBUNIT_TEXT_RESET);
	else if (WTERMSIG(status) == SIGFPE)
		printf("%s[FPE]%s\n", LIBUNIT_TEXT_RED, LIBUNIT_TEXT_RESET);
	else if (WTERMSIG(status) == SIGABRT)
		printf("%s[ABRT]%s\n", LIBUNIT_TEXT_RED, LIBUNIT_TEXT_RESET);
	else
		return (0);
	return (1);
}

/*
** wait the process end.
** check and print the test result
*/

static int	check_result(pid_t pid)
{
	int	status;
	int	ret;

	ret = wait_result(pid, &status);
	if (ret == -1)
	{
		printf("%s[LIBUNIT INTERNAL ERROR]%s\n", LIBUNIT_TEXT_RED,
			LIBUNIT_TEXT_RESET);
		return (0);
	}
	else if (ret == 1)
	{
		printf("%s[TIMEOUT]%s\n", LIBUNIT_TEXT_RED, LIBUNIT_TEXT_RESET);
		return (0);
	}
	if (WIFSIGNALED(status) && check_signal(status))
		return (0);
	if (WEXITSTATUS(status) != LIBUNIT_RESULT_GOOD)
	{
		printf("%s[KO]%s\n", LIBUNIT_TEXT_RED, LIBUNIT_TEXT_RESET);
		return (0);
	}
	printf("%s[OK]%s\n", LIBUNIT_TEXT_GREEN, LIBUNIT_TEXT_RESET);
	return (1);
}

/*
** exec all tests and print results
*/

int	exec_tests(t_unit_test *testlist)
{
	int		count_all;
	int		count_ok;
	pid_t	pid;

	count_all = 0;
	count_ok = 0;
	while (testlist != NULL)
	{
		put_testname(testlist->name);
		pid = fork();
		if (pid == 0)
			exit(LIBUNIT_RESULT_GOOD - (*testlist->func)());
		if (pid == -1)
			printf("%s[LIBUNIT INTERNAL ERROR]%s\n", LIBUNIT_TEXT_RED,
				LIBUNIT_TEXT_RESET);
		else
			count_ok += check_result(pid);
		count_all++;
		testlist = testlist->next;
	}
	put_summary(count_all, count_ok);
	if (count_ok != count_all)
		return (-1);
	return (0);
}
