/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   21_abcdefg_vs_abcde_with_8.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:41:46 by dnakano           #+#    #+#             */
/*   Updated: 2021/05/14 07:43:21 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft/libft.h"

int	abcdefg_vs_abcde_with_8(void)
{
	const char		s1[] = "abcdefg";
	const char		s2[] = "abcde";
	const size_t	n = 8;
	int				ret_ft;
	int				ret_std;

	ret_std = strncmp(s1, s2, n);
	ret_ft = ft_strncmp(s1, s2, n);
	if (ret_std == 0 && ret_ft == 0)
		return (0);
	else if (ret_std < 0 && ret_ft < 0)
		return (0);
	else if (ret_std > 0 && ret_ft > 0)
		return (0);
	else
		return (-1);
}
