# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/21 08:47:29 by dnakano           #+#    #+#              #
#    Updated: 2021/05/10 13:29:50 by dnakano          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	gcc
CFLAGS			=	-Wall -Werror -Wextra
SRCNAME			=	main.c
SRCDIR			=	.
SRCS			=	$(addprefix $(SRCDIR)/,$(SRCNAME))
OBJS			=	$(SRCS:%.c=%.o)
TESTSRCNAME		=	00_launcher.c \
					01_sleep_test.c \
					02_alarm_test.c
TESTSRCDIR		=	./misc
TESTSRCS		=	$(addprefix $(TESTSRCDIR)/,$(TESTSRCNAME))
TESTOBJS		=	$(TESTSRCS:%.c=%.o)
TESTLIBNAME		=	libunit.a
TESTLIBDIR		=	../framework
TESTLIB			=	$(TESTLIBDIR)/$(TESTLIBNAME)
TESTHEADERDIR	=	../framework
HEADERDIR		=	.
NAME			=	test.out

.SUFFIXES:		.o .c

.PHONY:			all
all:			$(NAME)

$(NAME):		$(TESTLIB) $(TESTOBJS) $(OBJS)
				$(CC) $(CFLAGS) \
				-o $(NAME) $(OBJS) $(TESTOBJS) \
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
