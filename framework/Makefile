# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/21 08:47:29 by dnakano           #+#    #+#              #
#    Updated: 2021/05/09 15:51:53 by dnakano          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				:=	gcc
CFLAGS			:=	-Wall -Werror -Wextra
SRCNAME			:=	load_test.c \
					launch_tests.c \
					exec_tests.c \
					destroy_test.c
SRCDIR			:=	.
SRCS			:=	$(addprefix $(SRCDIR)/,$(SRCNAME))
OBJS			:=	$(SRCS:%.c=%.o)
HEADERNAME		:=	libunit.h
HEADERDIR		:=	.
HEADERS			:=	$(addprefix $(HEADERDIR)/,$(HEADERNAME))
NAME			:=	libunit.a

.SUFFIXES:		.o .c

.PHONY:			all
all:			$(NAME)

$(NAME):		$(OBJS) $(BONUSOBJS) $(HEADERS)
				ar cr $(NAME) $(OBJS) $(BONUSOBJS)

.c.o:
				$(CC) $(CFLAGS) -I$(HEADERDIR) -c $< -o $(patsubst %.c,%.o,$<)

.PHONY:			clean
clean:
				rm -f $(OBJS)

.PHONY:			fclean
fclean:			clean
				rm -f $(NAME)

.PHONY:			re
re:				fclean all
