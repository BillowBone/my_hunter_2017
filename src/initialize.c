/*
** EPITECH PROJECT, 2017
** init_vector.c
** File description:
** Function that initialize a vector parameters
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "structs.h"
#include "include.h"

void initialize(sfVector2f *vector, sfVector2f *position, Duck *my_duck)
{
	my_duck->x = 0;
	my_duck->y = 0;
	my_duck->kill = 0;
	my_duck->score = 0;
	my_duck->missed = 0;
	vector->x = 0.1;
	vector->y = 0;
	position->x = 0;
	position->y = 0;
}

void init_mode(sfVideoMode *mode)
{
	mode->width = 1280;
	mode->height = 769;
	mode->bitsPerPixel = 32;
}

void init_general(Duck *my_duck, Hunt *hunt, Back *back)
{
	init_mode(&hunt->mode);
	initialize_rect(&my_duck->rect, 0, 110, 110);
	initialize(&my_duck->vector, &my_duck->position, my_duck);
	texture_sprite(my_duck, back);
}
