/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   54_abcde_vs_empty_with_42.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:41:46 by dnakano           #+#    #+#             */
/*   Updated: 2021/05/14 08:51:13 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft/libft.h"

int	abcde_vs_empty_with_42(void)
{
	const char		s1[] = "abcde";
	const char		s2[] = "";
	const size_t	n = 42;
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