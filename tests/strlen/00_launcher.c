/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:09:53 by dnakano           #+#    #+#             */
/*   Updated: 2021/05/10 13:30:41 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../101_basic_tests.h"
#include "../../framework/libunit.h"

int	strlen_launcher(void)
{
	t_unit_test *testlist;
	puts("STRLEN: ");
	testlist = NULL;
	load_test(&testlist, "Basic Test", &basic_test);
	load_test(&testlist, "KO Test", &ko_test);
	load_test(&testlist, "SEGV Test", &segv_test);
	load_test(&testlist, "BUSE Test", &buse_test);
	return(launch_tests(&testlist));
}
