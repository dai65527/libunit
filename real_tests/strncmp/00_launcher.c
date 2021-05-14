/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:09:53 by dnakano           #+#    #+#             */
/*   Updated: 2021/05/14 09:20:48 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "102_strncmp_tests.h"
#include "../../framework/libunit.h"

int	strncmp_launcher(void)
{
	t_unit_test	*testlist;

	puts("STRNCMP: ");
	testlist = NULL;
	load_test(&testlist, "empty vs empty with 0", &empty_vs_empty_with_0);
	load_test(&testlist, "empty vs empty with 1", &empty_vs_empty_with_1);
	load_test(&testlist, "empty vs empty with 42", &empty_vs_empty_with_42);
	load_test(&testlist, "abcde vs abcde with 0", &abcde_vs_abcde_with_0);
	load_test(&testlist, "abcde vs abcde with 3", &abcde_vs_abcde_with_3);
	load_test(&testlist, "abcde vs abcde with 5", &abcde_vs_abcde_with_5);
	load_test(&testlist, "abcde vs abcde with 6", &abcde_vs_abcde_with_6);
	load_test(&testlist, "abcde vs abcde with 42", &abcde_vs_abcde_with_42);
	load_test(&testlist, "abcde vs abcdefg with 0", &abcde_vs_abcdefg_with_0);
	load_test(&testlist, "abcde vs abcdefg with 3", &abcde_vs_abcdefg_with_3);
	load_test(&testlist, "abcde vs abcdefg with 5", &abcde_vs_abcdefg_with_5);
	load_test(&testlist, "abcde vs abcdefg with 6", &abcde_vs_abcdefg_with_6);
	load_test(&testlist, "abcde vs abcdefg with 7", &abcde_vs_abcdefg_with_7);
	load_test(&testlist, "abcde vs abcdefg with 8", &abcde_vs_abcdefg_with_8);
	load_test(&testlist, "abcde vs abcdefg with 42", &abcde_vs_abcdefg_with_42);
	load_test(&testlist, "abcdefg vs abcde with 0", &abcdefg_vs_abcde_with_0);
	load_test(&testlist, "abcdefg vs abcde with 3", &abcdefg_vs_abcde_with_3);
	load_test(&testlist, "abcdefg vs abcde with 5", &abcdefg_vs_abcde_with_5);
	load_test(&testlist, "abcdefg vs abcde with 6", &abcdefg_vs_abcde_with_6);
	load_test(&testlist, "abcdefg vs abcde with 7", &abcdefg_vs_abcde_with_7);
	load_test(&testlist, "abcdefg vs abcde with 8", &abcdefg_vs_abcde_with_8);
	load_test(&testlist, "abcdefg vs abcde with 42", &abcdefg_vs_abcde_with_42);
	load_test(&testlist, "abcde vs abcDE with 0", &abcde_vs_abcDE_with_0);
	load_test(&testlist, "abcde vs abcDE with 3", &abcde_vs_abcDE_with_3);
	load_test(&testlist, "abcde vs abcDE with 4", &abcde_vs_abcDE_with_4);
	load_test(&testlist, "abcde vs abcDE with 5", &abcde_vs_abcDE_with_5);
	load_test(&testlist, "abcde vs abcDE with 6", &abcde_vs_abcDE_with_6);
	load_test(&testlist, "abcde vs abcDE with 42", &abcde_vs_abcDE_with_42);
	load_test(&testlist, "abcDE vs abcde with 0", &abcDE_vs_abcde_with_0);
	load_test(&testlist, "abcDE vs abcde with 3", &abcDE_vs_abcde_with_3);
	load_test(&testlist, "abcDE vs abcde with 4", &abcDE_vs_abcde_with_4);
	load_test(&testlist, "abcDE vs abcde with 5", &abcDE_vs_abcde_with_5);
	load_test(&testlist, "abcDE vs abcde with 6", &abcDE_vs_abcde_with_6);
	load_test(&testlist, "abcDE vs abcde with 42", &abcDE_vs_abcde_with_42);
	load_test(&testlist, "abcde vs ABcde with 0", &abcde_vs_ABcde_with_0);
	load_test(&testlist, "abcde vs ABcde with 1", &abcde_vs_ABcde_with_1);
	load_test(&testlist, "abcde vs ABcde with 2", &abcde_vs_ABcde_with_2);
	load_test(&testlist, "abcde vs ABcde with 3", &abcde_vs_ABcde_with_3);
	load_test(&testlist, "abcde vs ABcde with 5", &abcde_vs_ABcde_with_5);
	load_test(&testlist, "abcde vs ABcde with 42", &abcde_vs_ABcde_with_42);
	load_test(&testlist, "ABcde vs abcde with 0", &ABcde_vs_abcde_with_0);
	load_test(&testlist, "ABcde vs abcde with 1", &ABcde_vs_abcde_with_1);
	load_test(&testlist, "ABcde vs abcde with 2", &ABcde_vs_abcde_with_2);
	load_test(&testlist, "ABcde vs abcde with 3", &ABcde_vs_abcde_with_3);
	load_test(&testlist, "ABcde vs abcde with 5", &ABcde_vs_abcde_with_5);
	load_test(&testlist, "ABcde vs abcde with 42", &ABcde_vs_abcde_with_42);
	load_test(&testlist, "empty vs abcde with 0", &empty_vs_abcde_with_0);
	load_test(&testlist, "empty vs abcde with 1", &empty_vs_abcde_with_1);
	load_test(&testlist, "empty vs abcde with 5", &empty_vs_abcde_with_5);
	load_test(&testlist, "empty vs abcde with 42", &empty_vs_abcde_with_42);
	load_test(&testlist, "abcde vs empty with 0", &abcde_vs_empty_with_0);
	load_test(&testlist, "abcde vs empty with 1", &abcde_vs_empty_with_1);
	load_test(&testlist, "abcde vs empty with 5", &abcde_vs_empty_with_5);
	load_test(&testlist, "abcde vs empty with 42", &abcde_vs_empty_with_42);
	return (launch_tests(&testlist));
}
