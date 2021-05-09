/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_segv_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:41:46 by dnakano           #+#    #+#             */
/*   Updated: 2021/05/09 15:45:12 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "test_target.h"

#include <unistd.h>

int	segv_test(void)
{
	if (ft_strlen(NULL) == 5)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
