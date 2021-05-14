/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_pipe_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:41:46 by dnakano           #+#    #+#             */
/*   Updated: 2021/05/12 11:35:59 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	pipe_test(void)
{
	int	pipe_fd[2];

	pipe(pipe_fd);
	close(pipe_fd[0]);
	write(pipe_fd[1], "42", 2);
	close(pipe_fd[1]);
	return (0);
}
