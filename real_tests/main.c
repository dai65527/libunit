/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 15:07:51 by dnakano           #+#    #+#             */
/*   Updated: 2021/05/14 09:10:48 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./libft/libft.h"
#include "./strlen/101_strlen_tests.h"
#include "./strncmp/102_strncmp_tests.h"

int	main(void)
{
	printf("*********************************\n");
	printf("******** 42 - Unit Tests ********\n");
	printf("*********************************\n");
	strlen_launcher();
	strncmp_launcher();
}
