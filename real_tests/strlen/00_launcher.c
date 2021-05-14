/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:09:53 by dnakano           #+#    #+#             */
/*   Updated: 2021/05/14 08:57:17 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "101_strlen_tests.h"
#include "../../framework/libunit.h"

int	strlen_launcher(void)
{
	t_unit_test *testlist;
	puts("STRLEN: ");
	testlist = NULL;
	load_test(&testlist, "empty string", &empty_string);
	load_test(&testlist, "one letter string", &one_letter_string);
	load_test(&testlist, "five letters string", &five_letters_string);
	load_test(&testlist, "ten letters string", &ten_letters_string);
	load_test(&testlist, "long string", &long_string);
	return(launch_tests(&testlist));
}
