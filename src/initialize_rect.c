/*
** EPITECH PROJECT, 2017
** initialize_rect.c
** File description:
** Function that creates and initialize a rect
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "include.h"

void initialize_rect(sfIntRect *rect, int left, int width, int height)
{
	rect->top = 0;
	rect->left = left;
	rect->width = width;
	rect->height = height;
}
