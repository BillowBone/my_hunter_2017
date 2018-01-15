/*
** EPITECH PROJECT, 2017
** structs.h
** File description:
** Declaration of my structures for my_hunter
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#ifndef _STRUCTS_H_
#define _STRUCTS_H_

typedef struct Duck Duck;
struct Duck
{
	sfSprite* sprite;
	sfTexture* texture;
	sfIntRect rect;
	sfVector2f vector;
	sfVector2f position;
	int kill;
	int score;
	int missed;
	float x;
	float y;
};

typedef struct Back Back;
struct Back
{
	sfTexture* textureback;
	sfSprite* spriteback;
};

typedef struct Time Time;
struct Time
{
	sfClock* clock;
	sfTime time;
	float seconds;
};

typedef struct Hunt Hunt;
struct Hunt
{
	sfRenderWindow* window;
	sfEvent event;
	sfVideoMode mode;
};
#endif /* _STRUCTS_H_ */
