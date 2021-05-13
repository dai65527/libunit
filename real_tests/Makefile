# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/21 08:47:29 by dnakano           #+#    #+#              #
#    Updated: 2021/05/13 22:29:51 by dnakano          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	gcc
CFLAGS			=	-Wall -Werror -Wextra
SRCNAME			=	main.c
SRCDIR			=	.
SRCS			=	$(addprefix $(SRCDIR)/,$(SRCNAME))
OBJS			=	$(SRCS:%.c=%.o)

STRLENSRCNAME	=	00_launcher.c \
					01_empty_string.c \
					02_one_letter_string.c \
					03_five_letters_string.c \
					04_ten_letters_string.c \
					05_long_string.c
STRLENDIR		=	strlen
TESTSRCS		+=	$(addprefix $(STRLENDIR)/,$(STRLENSRCNAME))

TESTOBJS		=	$(TESTSRCS:%.c=%.o)
TESTLIBNAME		=	libunit.a
TESTLIBDIR		=	../framework
TESTLIB			=	$(TESTLIBDIR)/$(TESTLIBNAME)
TESTHEADERDIR	=	../framework
LIBFTDIR		=	libft
LIBFTNAME		=	libft.a
LIBFT			=	$(LIBFTDIR)/$(LIBFTNAME)
HEADERDIR		=	.
NAME			=	test.out

.SUFFIXES:		.o .c

.PHONY:			all
all:			$(NAME)

$(NAME):		$(TESTLIB) $(LIBFT) $(TESTOBJS) $(OBJS)
				$(CC) $(CFLAGS) \
				-o $(NAME) $(OBJS) $(TESTOBJS) \
				-L$(LIBFTDIR) $(patsubst lib%,-l%,$(basename $(LIBFTNAME))) \
				-L$(TESTLIBDIR) $(patsubst lib%,-l%,$(basename $(TESTLIBNAME)))

%.o:%.c
				$(CC) $(CFLAGS) -c $< -o $@

$(TESTLIB):
				make -C $(TESTLIBDIR)

.PHONY:			test
test:			$(NAME)
				./$(NAME)

.PHONY:			clean
clean:
				rm -f $(OBJS) $(TESTOBJS)
				make fclean -C $(TESTLIBDIR)

.PHONY:			fclean
fclean:			clean
				rm -f $(NAME)

.PHONY:			re
re:				fclean all
