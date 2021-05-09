/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 11:18:30 by dnakano           #+#    #+#             */
/*   Updated: 2021/05/09 14:05:16 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** printf should be replaced!!
*/

#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include "libunit.h"

static int	check_result(void)
{
	int		status;

	wait(&status);
	if (WIFSIGNALED(status))
	{
		if (WSTOPSIG(status) == SIGSEGV)
		{
			printf("[SEGV]\n");
			return (0);
		}
		else if (WSTOPSIG(status) == SIGBUS)
		{
			printf("[SEGV]\n");
			return (0);
		}
	}
	if (WEXITSTATUS(status) != 0)
	{
		printf("[OK]\n");
		return (1);
	}
	printf("[NG]\n");
	return (0);
}

int	exec_tests(t_unit_test *testlist)
{
	int		count_all;
	int		count_ok;
	pid_t	pid;

	count_all = 0;
	count_ok = 0;
	while (testlist != NULL)
	{
		printf("\t> %s : [", testlist->name);
		pid = fork();
		if (pid == -1)
			printf("FORK ERROR]\n");
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
