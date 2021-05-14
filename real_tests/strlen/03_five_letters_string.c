/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_five_letters_string.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:41:46 by dnakano           #+#    #+#             */
/*   Updated: 2021/05/13 21:50:21 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft/libft.h"

int	five_letters_string(void)
{
	const char	str[] = "Hello";

	if (ft_strlen(str) == strlen(str))
		return (0);
	else
		return (-1);
}
