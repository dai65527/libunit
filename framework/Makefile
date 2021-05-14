# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/21 08:47:29 by dnakano           #+#    #+#              #
#    Updated: 2021/05/14 11:08:44 by dnakano          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	gcc
CFLAGS			=	-Wall -Werror -Wextra
SRCNAME			=	load_test.c \
					launch_tests.c \
					exec_tests.c \
					destroy_test.c
SRCDIR			=	.
SRCS			=	$(addprefix $(SRCDIR)/,$(SRCNAME))
OBJS			=	$(SRCS:%.c=%.o)
HEADERNAME		=	libunit.h
HEADERDIR		=	.
HEADERS			=	$(addprefix $(HEADERDIR)/,$(HEADERNAME))
NAME			=	libunit.a

.PHONY:			all
all:			$(NAME)

$(NAME):		$(OBJS) $(BONUSOBJS) $(HEADERS)
				ar cr $(NAME) $(OBJS) $(BONUSOBJS)

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
