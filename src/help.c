/*
** EPITECH PROJECT, 2017
** help.c
** File description:
** Function that displays the rules of my_hunter
*/

#include "structs.h"
#include "include.h"

void display_rules(int argc, char *argv[])
{
	if (argc > 1) {
		if (argv[1][0] == '-' && argv[1][1] == 'h') {
			my_putstr("\n");
			my_putstr("This program is a duck hunt game, ");
			my_putstr("the rules are very simples:\n\n");
			my_putstr("Ducks comes from your left and you");
			my_putstr(" have to click on them before they");
			my_putstr(" reach the right side of the screen\n\n");
			my_putstr("You have as much bullets as ");
			my_putstr("you need to kill them\n\n");
			my_putstr("Every duck passes one and only one time,");
			my_putstr(" you have to shoot them before they cross");
			my_putstr(" the right side of the window\n\n");
			my_putstr("The game end when you let 3 ducks cross");
			my_putstr(" the screen and your score will");
			my_putstr(" be displayed\n\n");
		}
	}
}
