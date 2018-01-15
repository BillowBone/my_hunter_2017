##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

NAME	=	my_hunter	\

SRC	=	./src/analyse_events.c\
		./src/clock.c		\
		./src/end.c		\
		./src/help.c		\
		./src/initialize.c	\
		./src/initialize_rect.c	\
		./src/kill.c		\
		./src/main.c		\
		./src/manage.c	\
		./src/move_rect.c	\
		./src/my_putchar.c	\
		./src/my_put_nbr.c	\
		./src/my_putstr.c	\
		./src/RenderWindow.c	\
		./src/setTexture.c	\
		./src/sprite_create.c	\
		./src/texture_from_file.c\
		./src/texture_sprite.c\
		./src/update.c	\
		./src/window.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -pedantic -lc_graph_prog -I./include/

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc $(OBJ) $(CFLAGS) -o $(NAME)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
