/*
** EPITECH PROJECT, 2017
** manage.c
** File description:
** This file contains some manage functions for the events
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "structs.h"
#include "include.h"

void manage_mouse_click(sfMouseButtonEvent event)
{
	if (event.button == sfMouseLeft) {
		my_putstr("Mouse x=");
		my_put_nbr(event.x);
		my_putstr(" y=");
		my_put_nbr(event.y);
		my_putstr("\n");
	}
}

int is_it_aclick(sfMouseButtonEvent click, Duck my_duck)
{
	if (click.button == sfMouseLeft) {
		return (manage_death(click, my_duck));
	}
	return (0);
}

int manage_death(sfMouseButtonEvent click, Duck my_duck)
{
	if (click.x >= my_duck.x && click.x <= my_duck.x + 110) {
		if (click.y >= my_duck.y && click.y <= my_duck.y + 110) {
			my_putstr("Got it !\n");
			return (1);
		}
	}
	return (0);
}
