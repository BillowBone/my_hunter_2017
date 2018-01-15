/*
** EPITECH PROJECT, 2017
** setTexture.c
** File description:
** Function that set all textures for my sprites
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "include.h"

void setTexture(sfTexture* texture, sfTexture* textureback, sfSprite* sprite, sfSprite* spriteback)
{
	sfSprite_setTexture(spriteback, textureback, sfTrue);
	sfSprite_setTexture(sprite, texture, sfTrue);
}

void set_it(Duck my_duck, Back back)
{
	setTexture(my_duck.texture, back.textureback, my_duck.sprite, back.spriteback);
	sfSprite_setTextureRect(my_duck.sprite, my_duck.rect);
}
