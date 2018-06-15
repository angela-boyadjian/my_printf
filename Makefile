##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## A Makefile for projetcs
##

CC=	cc -c

RM=	rm -rf

FFLAGS	+=	-Wall -Wextra

CFLAGS	+=	-I./include

NAME=	libmy.a

SRCS =	srcs/my_printf.c \
	srcs/flags.c \
	srcs/flags_2.c \
	srcs/flags_3.c \
	srcs/flags_4.c \
	srcs/my_char_isalphanum.c \
	srcs/my_char_is_alpha.c \
	srcs/my_char_is_num.c \
	srcs/my_put_nbr.c \
	srcs/my_putchar.c \
	srcs/my_putnbr_base.c \
	srcs/my_putnbr_base_2.c \
	srcs/my_putstr.c \
	srcs/my_strlen.c \
	srcs/my_strncmp.c \
	srcs/utils.c

OBJS=	$(SRCS:.c=.o)

LIB= 	ar rc

all:	$(NAME)

$(NAME):	$(OBJS)
		$(LIB) $(NAME) $(OBJS)
		ranlib libmy.a

clean:
	$(RM) $(OBJS) *.o

fclean: clean
	$(RM) libmy.a

re:	fclean all

.PHONY:	 all clean fclean re