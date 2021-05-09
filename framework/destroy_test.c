/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 09:07:36 by dnakano           #+#    #+#             */
/*   Updated: 2021/05/09 14:02:30 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libunit.h"

static void	destory_one_test(t_unit_test *test)
{
	free(test->name);
	free(test);
}

void	destroy_tests(t_unit_test **testlist)
{
	t_unit_test	*next;

	while (*testlist != NULL)
	{
		next = (*testlist)->next;
		destory_one_test(*testlist);
		*testlist = next;
	}
}
