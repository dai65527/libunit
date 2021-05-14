# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/21 08:47:29 by dnakano           #+#    #+#              #
#    Updated: 2021/05/14 11:09:24 by dnakano          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	gcc
CFLAGS			=	-Wall -Werror -Wextra
LDFLAGS			=	-L$(TESTLIBDIR) $(patsubst lib%,-l%,$(basename $(TESTLIBNAME)))
SRCNAME			=	main.c ft_strlen.c
SRCDIR			=	.
SRCS			=	$(addprefix $(SRCDIR)/,$(SRCNAME))
OBJS			=	$(SRCS:%.c=%.o)
TESTSRCNAME		=	00_launcher.c \
					01_basic_test.c \
					02_ko_test.c \
					03_segv_test.c \
					04_buse_test.c \
					05_pipe_test.c \
					06_fpe_test.c \
					07_abrt_test.c \
					10_timeout_test.c
TESTSRCDIR		=	./strlen
TESTSRCS		=	$(addprefix $(TESTSRCDIR)/,$(TESTSRCNAME))
TESTOBJS		=	$(TESTSRCS:%.c=%.o)
TESTLIBNAME		=	libunit.a
TESTLIBDIR		=	../framework
TESTLIB			=	$(TESTLIBDIR)/$(TESTLIBNAME)
TESTHEADERDIR	=	../framework
HEADERDIR		=	.
NAME			=	test.out

.PHONY:			all
all:			$(NAME)

$(NAME):		$(TESTLIB) $(TESTOBJS) $(OBJS)
				$(CC) $(CFLAGS) \
				-o $(NAME) $(OBJS) $(TESTOBJS) \
				$(LDFLAGS)

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
