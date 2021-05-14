/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   102_strncmp_tests.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:31:03 by dnakano           #+#    #+#             */
/*   Updated: 2021/05/14 09:12:22 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _101_STRNCMP_TESTS_H
# define _101_STRNCMP_TESTS_H

int	strncmp_launcher(void);
int	empty_vs_empty_with_0(void);
int	empty_vs_empty_with_1(void);
int	empty_vs_empty_with_42(void);
int	abcde_vs_abcde_with_0(void);
int	abcde_vs_abcde_with_3(void);
int	abcde_vs_abcde_with_5(void);
int	abcde_vs_abcde_with_6(void);
int	abcde_vs_abcde_with_42(void);
int	abcde_vs_abcdefg_with_0(void);
int	abcde_vs_abcdefg_with_3(void);
int	abcde_vs_abcdefg_with_5(void);
int	abcde_vs_abcdefg_with_6(void);
int	abcde_vs_abcdefg_with_7(void);
int	abcde_vs_abcdefg_with_8(void);
int	abcde_vs_abcdefg_with_42(void);
int	abcdefg_vs_abcde_with_0(void);
int	abcdefg_vs_abcde_with_3(void);
int	abcdefg_vs_abcde_with_5(void);
int	abcdefg_vs_abcde_with_6(void);
int	abcdefg_vs_abcde_with_7(void);
int	abcdefg_vs_abcde_with_8(void);
int	abcdefg_vs_abcde_with_42(void);
int	abcde_vs_abcDE_with_0(void);
int	abcde_vs_abcDE_with_3(void);
int	abcde_vs_abcDE_with_4(void);
int	abcde_vs_abcDE_with_5(void);
int	abcde_vs_abcDE_with_6(void);
int	abcde_vs_abcDE_with_42(void);
int	abcDE_vs_abcde_with_0(void);
int	abcDE_vs_abcde_with_3(void);
int	abcDE_vs_abcde_with_4(void);
int	abcDE_vs_abcde_with_5(void);
int	abcDE_vs_abcde_with_6(void);
int	abcDE_vs_abcde_with_42(void);
int	abcde_vs_ABcde_with_0(void);
int	abcde_vs_ABcde_with_1(void);
int	abcde_vs_ABcde_with_2(void);
int	abcde_vs_ABcde_with_3(void);
int	abcde_vs_ABcde_with_5(void);
int	abcde_vs_ABcde_with_42(void);
int	ABcde_vs_abcde_with_0(void);
int	ABcde_vs_abcde_with_1(void);
int	ABcde_vs_abcde_with_2(void);
int	ABcde_vs_abcde_with_3(void);
int	ABcde_vs_abcde_with_5(void);
int	ABcde_vs_abcde_with_42(void);
int	empty_vs_abcde_with_0(void);
int	empty_vs_abcde_with_1(void);
int	empty_vs_abcde_with_5(void);
int	empty_vs_abcde_with_42(void);
int	abcde_vs_empty_with_0(void);
int	abcde_vs_empty_with_1(void);
int	abcde_vs_empty_with_5(void);
int	abcde_vs_empty_with_42(void);

#endif
