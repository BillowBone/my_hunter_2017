/*
** EPITECH PROJECT, 2017
** include.h
** File description:
** My include for all the functions of my_hunter
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "structs.h"
#ifndef _MY_H_
#define _MY_H_

void analyse_events(sfRenderWindow *window, sfEvent event);
void manage_clock(Time *my_time, Duck *my_duck);
int end_game(sfRenderWindow *window, int score);
void initialize(sfVector2f *vector, sfVector2f *position, Duck *my_duck);
void init_mode(sfVideoMode *mode);
void init_general(Duck *my_duck, Hunt *hunt, Back *back);
void initialize_rect(sfIntRect *rect, int left, int width, int height);
int killed(Duck *my_duck, sfVector2f *position);
void manage_mouse_click(sfMouseButtonEvent event);
int is_it_aclick(sfMouseButtonEvent click, Duck my_duck);
int manage_death(sfMouseButtonEvent click, Duck my_duck);
void move_rect(sfIntRect *rect, int offset, int max_value);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char *str);
void RenderWindow(sfRenderWindow* window, sfSprite* sprite, sfSprite* spriteback);
void setTexture(sfTexture* texture, sfTexture* textureback, sfSprite* sprite, sfSprite* spriteback);
void update_duck(Duck *my_duck);
void close_window(sfRenderWindow *window);
void texture_from_file(Duck *my_duck, Back *back);
void sprite_create(Duck *my_duck, Back *back);
void texture_sprite(Duck *my_duck, Back *back);
void set_it(Duck my_duck, Back back);
void display_rules(int argc, char *argv[]);
#endif /* _MY_H_ */
