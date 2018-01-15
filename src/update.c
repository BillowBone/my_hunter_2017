/*
** EPITECH PROJECT, 2017
** update.c
** File description:
** Function that update the duck position
*/

#include "structs.h"
#include "include.h"

void update_duck(Duck *my_duck)
{
	my_duck->x = my_duck->x + my_duck->vector.x;
	my_duck->y = my_duck->y + my_duck->vector.y;
}
