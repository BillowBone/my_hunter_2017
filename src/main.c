/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main.c
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "structs.h"
#include "include.h"

int main(int argc, char *argv[])
{
	Hunt hunt;
	Duck my_duck;
	Back back;
	Time my_time;

	if (argc > 1) {
		display_rules(argc, argv);
		return (0);
	}
	init_general(&my_duck, &hunt, &back);
	hunt.window = sfRenderWindow_create(hunt.mode, "my_hunter", sfResize | sfClose, NULL);
	set_it(my_duck, back);
	my_time.clock = sfClock_create();
	if (!hunt.window)
		return (84);
	while (sfRenderWindow_isOpen(hunt.window)) {
		while (sfRenderWindow_pollEvent(hunt.window, &hunt.event))
			analyse_events(hunt.window, hunt.event);
		my_time.time = sfClock_getElapsedTime(my_time.clock);
		my_time.seconds = my_time.time.microseconds / 1000000.0;
		my_duck.kill = is_it_aclick(hunt.event.mouseButton, my_duck);
		RenderWindow(hunt.window, my_duck.sprite, back.spriteback);
		sfSprite_move(my_duck.sprite, my_duck.vector);
		update_duck(&my_duck);
		sfRenderWindow_display(hunt.window);
		manage_clock(&my_time, &my_duck);
		if ((my_duck.kill == 1) || (my_duck.x > 1280)) {
			my_duck.kill = killed(&my_duck, &my_duck.position);
			sfSprite_setPosition(my_duck.sprite, my_duck.position);
		}
		if (my_duck.missed > 2)
			break;
	}
	return (end_game(hunt.window, my_duck.score));
}
