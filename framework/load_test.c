/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 08:38:18 by dnakano           #+#    #+#             */
/*   Updated: 2021/05/09 14:01:04 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libunit.h"

static char	*libunit_strdup(const char *s1)
{
	size_t	idx;
	size_t	len;
	char	*dest;

	len = 0;
	while (s1[len] != '\0')
		len++;
	dest = (char *)malloc(len + 1);
	if (dest == NULL)
		return (NULL);
	idx = 0;
	while (idx < len)
	{
		dest[idx] = s1[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}

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

static void	add_new_test(t_unit_test **testlist, t_unit_test *new_test)
{
	t_unit_test		*test;

	if (*testlist == NULL)
	{
		*testlist = new_test;
		return ;
	}
	test = *testlist;
	while (test->next == NULL)
		test = test->next;
	test->next = new_test;
}

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
