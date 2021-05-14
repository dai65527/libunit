/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 10:09:44 by dnakano           #+#    #+#             */
/*   Updated: 2021/05/14 10:50:27 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libunit.h"

/*
**  work as normal strlen but has unique name
*/

size_t	libunit_strlen(const char *s)
{
	size_t	len;	

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

/*
**  work as normal strdup but has unique name
*/

char	*libunit_strdup(const char *s1)
{
	size_t	idx;
	size_t	len;
	char	*dest;

	len = libunit_strlen(s1);
	dest = (char *)malloc(len + 1);
	if (dest == NULL)
		return (NULL);
	idx = 0;
	while (idx < len)
	{
		dest[idx] = s1[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}

void	put_summary(int count_all, int count_ok)
{
	if (count_all == count_ok)
		printf(LIBUNIT_TEXT_GREEN);
	else
		printf(LIBUNIT_TEXT_RED);
	printf("%d/%d tests checked%s\n", count_ok, count_all, LIBUNIT_TEXT_RESET);
}

void	put_testname(const char *testname)
{
	write(1, "\t> ", 3);
	write(1, testname, libunit_strlen(testname));
	write(1, " : ", 3);
}
