/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 11:18:30 by dnakano           #+#    #+#             */
/*   Updated: 2021/05/12 11:29:22 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** printf should be replaced!!
*/

#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include "libunit.h"

/*
** wait the process end.
** check and print the test result
*/

static int	check_result(void)
{
	int		status;

	wait(&status);
	if (WIFSIGNALED(status))
	{
		if (WTERMSIG(status) == SIGSEGV)
		{
			printf("[SEGV]\n");
			return (0);
		}
		else if (WTERMSIG(status) == SIGBUS)
		{
			printf("[BUSE]\n");
			return (0);
		}
		else if (WTERMSIG(status) == SIGFPE)
		{
			printf("[FPE]\n");
			return (0);
		}
		else if (WTERMSIG(status) == SIGPIPE)
		{
			printf("[PIPE]\n");
			return (0);
		}
	}
	if (WEXITSTATUS(status) != 0)
	{
		printf("[KO]\n");
		return (0);
	}
	printf("[OK]\n");
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
		printf("\t> %s : ", testlist->name);
		fflush(stdout);
		pid = fork();
		if (pid == -1)
			printf("[FORK ERROR]\n");
		else if (pid == 0)
			exit((*testlist->func)());
		else
			count_ok += check_result();
		count_all++;
		testlist = testlist->next;
	}
	printf("%d/%d tests checked\n", count_ok, count_all);
	if (count_ok != count_all)
		return (-1);
	return (0);
}
