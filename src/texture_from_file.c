/*
** EPITECH PROJECT, 2017
** texture_from_file.c
** File description:
** Function that creates the textures for my_hunter
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "structs.h"
#include "include.h"

void texture_from_file(Duck *my_duck, Back *back)
{
	back->textureback = sfTexture_createFromFile("./sprites/background.png", NULL);
	my_duck->texture = sfTexture_createFromFile("./sprites/myHunter.png", NULL);
}
