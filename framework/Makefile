# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/21 08:47:29 by dnakano           #+#    #+#              #
#    Updated: 2021/05/14 10:49:48 by dnakano          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	gcc
CFLAGS			=	-Wall -Werror -Wextra
SRCNAME			=	load_test.c \
					launch_tests.c \
					exec_tests.c \
					destroy_test.c \
					utils.c
SRCDIR			=	.
SRCS			=	$(addprefix $(SRCDIR)/,$(SRCNAME))
OBJS			=	$(SRCS:%.c=%.o)
HEADERNAME		=	libunit.h
HEADERDIR		=	.
HEADERS			=	$(addprefix $(HEADERDIR)/,$(HEADERNAME))
NAME			=	libunit.a

.SUFFIXES:		.o .c

.PHONY:			all
all:			$(NAME)

$(NAME):		$(OBJS) $(HEADERS)
				ar cr $(NAME) $(OBJS)

%.o:%.c
				$(CC) $(CFLAGS) -c $< -o $@

.PHONY:			clean
clean:
				rm -f $(OBJS)

.PHONY:			fclean
fclean:			clean
				rm -f $(NAME)

.PHONY:			re
re:				fclean all
