/*
** EPITECH PROJECT, 2017
** move_rect.c
** File description:
** Function that takes a rectangle and make it move on the spritesheet
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "include.h"

void move_rect(sfIntRect *rect, int offset, int max_value)
{
	if ((rect->left + offset) < max_value) {
		rect->left = rect->left + offset;
	} else {
		rect->left = 0;
	}
}
