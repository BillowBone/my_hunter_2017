/*
** EPITECH PROJECT, 2017
** sprite_create.c
** File description:
** Function that creates the sprites for my_hunter
*/

#include "structs.h"
#include "include.h"

void sprite_create(Duck *my_duck, Back *back)
{
	my_duck->sprite = sfSprite_create();
	back->spriteback = sfSprite_create();
}
