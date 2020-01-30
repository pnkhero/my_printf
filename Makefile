##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## no file there , just an header epitech example
##

SRC	=	lib/my/my_putstr.c 			\
		lib/my/my_putchar.c			\
		lib/my/my_printf.c			\
		lib/my/my_strlenprintf.c	\
		lib/my/my_putnbr.c			\
		lib/my/unsigned_putnbr.c	\
		lib/my/my_octal_nb.c		\
		lib/my/check_flag2.c		\
		lib/my/my_strlen.c			\
		lib/my/my_revstr.c          \
		lib/my/my_extraflag.c		\

OBJ	=	$(SRC:.c=.o)

NAME	= libmy.a

all:	$(NAME) clean

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:		clean
		    rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
