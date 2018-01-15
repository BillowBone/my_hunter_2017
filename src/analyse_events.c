/*
** EPITECH PROJECT, 2017
** analyse_events.c
** File description:
** Function that detect which event is in parameter and call the appropriate function according to the detected event
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "structs.h"
#include "include.h"

void analyse_events(sfRenderWindow *window, sfEvent event)
{
	if (event.type == sfEvtClosed) {
		close_window(window);
	}
}
