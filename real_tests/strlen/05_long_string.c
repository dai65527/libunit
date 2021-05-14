/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_long_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:41:46 by dnakano           #+#    #+#             */
/*   Updated: 2021/05/13 21:53:26 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft/libft.h"

int	long_string(void)
{
	char	str[424242];

	memset(str, 'a', 424241);
	str[424241] = '\0';
	if (ft_strlen(str) == strlen(str))
		return (0);
	else
		return (-1);
}
