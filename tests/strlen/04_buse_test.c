/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_buse_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:41:46 by dnakano           #+#    #+#             */
/*   Updated: 2021/05/09 15:50:08 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "test_target.h"

int	buse_test(void)
{
	char *s = "test";

	s[0] = '0';		// this causes bus error
	if (ft_strlen("Hello") == 5)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
