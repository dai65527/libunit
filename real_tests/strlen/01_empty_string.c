/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_empty_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:41:46 by dnakano           #+#    #+#             */
/*   Updated: 2021/05/13 21:44:19 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft/libft.h"

int	empty_string(void)
{
	const char	str[] = "";

	if (ft_strlen(str) == strlen(str))
		return (0);
	else
		return (-1);
}
