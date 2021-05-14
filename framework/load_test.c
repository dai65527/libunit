/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 08:38:18 by dnakano           #+#    #+#             */
/*   Updated: 2021/05/14 10:44:20 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libunit.h"

/*
** creates a new test for testlist
*/

static t_unit_test	*create_new_test(const char *casename, t_fnptr fn)
{
	t_unit_test	*new_test;

	new_test = (t_unit_test *)malloc(sizeof(t_unit_test));
	if (new_test == NULL)
		return (NULL);
	new_test->name = libunit_strdup(casename);
	if (new_test->name == NULL)
	{
		free(new_test);
		return (NULL);
	}
	new_test->func = fn;
	new_test->next = NULL;
	return (new_test);
}

/*
** adds a new test for testlist
*/

static void	add_new_test(t_unit_test **testlist, t_unit_test *new_test)
{
	t_unit_test		*test;

	if (*testlist == NULL)
	{
		*testlist = new_test;
		return ;
	}
	test = *testlist;
	while (test->next != NULL)
		test = test->next;
	test->next = new_test;
}

/*
** add new testcase (name and function to test) to testlist
*/

void	load_test(t_unit_test **testlist, const char *casename, t_fnptr fn)
{
	t_unit_test	*new_test;

	new_test = create_new_test(casename, fn);
	if (new_test == NULL)
	{
		destroy_tests(testlist);
		return ;
	}
	add_new_test(testlist, new_test);
}
