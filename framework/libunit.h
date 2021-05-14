/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 07:33:08 by dnakano           #+#    #+#             */
/*   Updated: 2021/05/14 10:48:00 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <unistd.h>

# define LIBUNIT_TIMEOUT_MSEC 1000
# define LIBUNIT_RESULT_GOOD 0x5D
# define LIBUNIT_TEXT_RED "\033[1;31m"
# define LIBUNIT_TEXT_GREEN "\033[1;32m"
# define LIBUNIT_TEXT_RESET "\033[0m"

typedef int	(*t_fnptr)(void);

typedef struct s_unit_test
{
	char				*name;
	t_fnptr				func;
	struct s_unit_test	*next;
}						t_unit_test;

void	load_test(t_unit_test **testlist, const char *casename, t_fnptr fn);
int		launch_tests(t_unit_test **testlist);
int		exec_tests(t_unit_test *testlist);
void	destroy_tests(t_unit_test **testlist);

size_t	libunit_strlen(const char *s);
char	*libunit_strdup(const char *s1);
void	put_summary(int count_all, int count_ok);
void	put_testname(const char *testname);

#endif
