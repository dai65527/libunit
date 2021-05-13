/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 07:33:08 by dnakano           #+#    #+#             */
/*   Updated: 2021/05/13 12:22:32 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <unistd.h>

# define LIBUNIT_TIMEOUT_MSEC 1000

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

#endif
