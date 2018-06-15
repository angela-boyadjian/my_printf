##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## a Makefile for tests
##

SRC_DIR=	$(realpath ..)

SRC=		$(SRC_DIR)/srcs/my_strncmp.c \
		$(SRC_DIR)/srcs/my_char_is_alpha.c \
		$(SRC_DIR)/srcs/my_char_is_num.c \
		$(SRC_DIR)/srcs/my_char_isalphanum.c \
		$(SRC_DIR)/srcs/my_printf.c \
		$(SRC_DIR)/srcs/my_strlen.c

SRC_UT_DIR=	$(realpath .)

SRC_UT=		$(SRC_UT_DIR)/test_my_strncmp.c \
		$(SRC_UT_DIR)/test_my_char_is_alpha.c \
		$(SRC_UT_DIR)/test_my_char_is_num.c \
		$(SRC_UT_DIR)/test_my_char_isalphanum.c \
		$(SRC_UT_DIR)/test_my_printf.c

GCDA_FILES=	$(SRC:.c=.gcda) $(SRC_UT:.c=.gcda)

GCNO_FILES=	$(SRC:.c=.gcno) $(SRC_UT:.c=.gcno)

OBJ=		$(SRC:.c=.o) $(SRC_UT:.c=.o)

CFLAGS= 	-Wall -Wextra --coverage -I../include

LDFLAGS=	-lcriterion -lgcov -L../ -lmy

NAME=		units

all:		$(NAME)

$(NAME):	$(OBJ)
		make -C ../ re NAME=libmy.a
		cc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
		rm -f $(OBJ)
		rm -f $(GCDA_FILES)
		rm -f $(GCNO_FILES)

fclean: 	clean
		rm -f $(NAME)

re: fclean all
