/*
** EPITECH PROJECT, 2017
** end.c
** File description:
** Function that displays the score and close the window
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "include.h"

int end_game(sfRenderWindow *window, int score)
{
	my_putstr("Game Over ! Your score is: ");
	my_put_nbr(score);
	my_putstr("\n");
	sfRenderWindow_destroy(window);
	return (0);
}
