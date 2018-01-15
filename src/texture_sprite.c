/*
** EPITECH PROJECT, 2017
** texture_sprite.c
** File description:
** texture_sprite.c
*/

#include "structs.h"
#include "include.h"

void texture_sprite(Duck *my_duck, Back *back)
{
	texture_from_file(my_duck, back);
	sprite_create(my_duck, back);
}
