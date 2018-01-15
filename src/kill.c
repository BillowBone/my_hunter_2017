/*
** EPITECH PROJECT, 2017
** kill.c
** File description:
** Function that tells if the duck is dead
*/

#include "structs.h"
#include "include.h"

int killed(Duck *my_duck, sfVector2f *position)
{
	if (my_duck->x > 1280) {
		my_duck->missed = my_duck->missed + 1;
		if (my_duck->missed < 4)
			my_putstr("Missed !\n");
	}
	my_duck->x = 0;
	position->y = (int)(position->y + 380) % 610;
	my_duck->y = position->y;
	my_duck->vector.x = my_duck->vector.x + 0.05;
	if (my_duck->kill == 1)
		my_duck->score = my_duck->score + 1;
	return (0);
}
