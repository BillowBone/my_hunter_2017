/*
** EPITECH PROJECT, 2017
** clock.c
** File description:
** Functions that manage the clock for the my_hunter project
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "structs.h"
#include "include.h"

void manage_clock(Time *my_time, Duck *my_duck)
{
	if (my_time->seconds > 0.08) {
		move_rect(&my_duck->rect, 110, 330);
		sfSprite_setTextureRect(my_duck->sprite, my_duck->rect);
		sfClock_restart(my_time->clock);
		my_time->seconds = 0.0;
	}
}
