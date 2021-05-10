/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 09:44:37 by dnakano           #+#    #+#             */
/*   Updated: 2021/05/09 16:01:13 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/wait.h>
#include "libunit.h"

/*
** exec all testcase and put result
** free memories of testlist
*/

int	launch_tests(t_unit_test **testlist)
{
	int	ret;

	ret = exec_tests(*testlist);
	destroy_tests(testlist);
	return (ret);
}
