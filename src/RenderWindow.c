/*
** EPITECH PROJECT, 2017
** RenderWindow.c
** File description:
** Gestionnary for the sf_RenderWindow functions
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "include.h"

void RenderWindow(sfRenderWindow* window, sfSprite* sprite, sfSprite* spriteback)
{
	sfRenderWindow_clear(window, sfBlack);
	sfRenderWindow_drawSprite(window, spriteback, NULL);
	sfRenderWindow_drawSprite(window, sprite, NULL);
}
