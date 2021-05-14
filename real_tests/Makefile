# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/21 08:47:29 by dnakano           #+#    #+#              #
#    Updated: 2021/05/14 08:40:35 by dnakano          ###   ########.fr        #
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

STRNCMPSRCNAME	=	00_launcher.c \
					01_empty_vs_empty_with_0.c \
					02_empty_vs_empty_with_1.c \
					03_empty_vs_empty_with_42.c \
					04_abcde_vs_abcde_with_0.c \
					05_abcde_vs_abcde_with_3.c \
					06_abcde_vs_abcde_with_5.c \
					07_abcde_vs_abcde_with_6.c \
					08_abcde_vs_abcde_with_42.c \
					09_abcde_vs_abcdefg_with_0.c \
					10_abcde_vs_abcdefg_with_3.c \
					11_abcde_vs_abcdefg_with_5.c \
					12_abcde_vs_abcdefg_with_6.c \
					13_abcde_vs_abcdefg_with_7.c \
					14_abcde_vs_abcdefg_with_8.c \
					15_abcde_vs_abcdefg_with_42.c \
					16_abcdefg_vs_abcde_with_0.c \
					17_abcdefg_vs_abcde_with_3.c \
					18_abcdefg_vs_abcde_with_5.c \
					19_abcdefg_vs_abcde_with_6.c \
					20_abcdefg_vs_abcde_with_7.c \
					21_abcdefg_vs_abcde_with_8.c \
					22_abcdefg_vs_abcde_with_42.c \
					23_abcde_vs_abcDE_with_0.c \
					24_abcde_vs_abcDE_with_3.c \
					25_abcde_vs_abcDE_with_4.c \
					26_abcde_vs_abcDE_with_5.c \
					27_abcde_vs_abcDE_with_6.c \
					28_abcde_vs_abcDE_with_42.c \
					29_abcDE_vs_abcde_with_0.c \
					30_abcDE_vs_abcde_with_3.c \
					31_abcDE_vs_abcde_with_4.c \
					32_abcDE_vs_abcde_with_5.c \
					33_abcDE_vs_abcde_with_6.c \
					34_abcDE_vs_abcde_with_42.c \
					35_abcde_vs_ABcde_with_0.c \
					36_abcde_vs_ABcde_with_1.c \
					37_abcde_vs_ABcde_with_2.c \
					38_abcde_vs_ABcde_with_3.c \
					39_abcde_vs_ABcde_with_5.c \
					40_abcde_vs_ABcde_with_42.c \
					41_ABcde_vs_abcde_with_0.c \
					42_ABcde_vs_abcde_with_1.c \
					43_ABcde_vs_abcde_with_2.c \
					44_ABcde_vs_abcde_with_3.c \
					45_ABcde_vs_abcde_with_5.c \
					46_ABcde_vs_abcde_with_42.c \
					47_empty_vs_abcde_with_0.c \
					48_empty_vs_abcde_with_1.c \
					49_empty_vs_abcde_with_5.c \
					50_empty_vs_abcde_with_42.c \
					51_abcde_vs_empty_with_0.c \
					52_abcde_vs_empty_with_1.c \
					53_abcde_vs_empty_with_5.c \
					54_abcde_vs_empty_with_42.c
STRNCMPDIR		=	strncmp
TESTSRCS		+=	$(addprefix $(STRNCMPDIR)/,$(STRNCMPSRCNAME))

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
