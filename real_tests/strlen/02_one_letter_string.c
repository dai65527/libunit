/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_one_letter_string.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:41:46 by dnakano           #+#    #+#             */
/*   Updated: 2021/05/13 21:47:23 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft/libft.h"

int	one_letter_string(void)
{
	const char	str[] = "a";

	if (ft_strlen(str) == strlen(str))
		return (0);
	else
		return (-1);
}
