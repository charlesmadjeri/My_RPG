/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** in_game_menu
*/

#include "../../include/main.h"

pause_menu *init_pause_menu(void)
{
    pause_menu *pause_menu = malloc(sizeof(*pause_menu));

    pause_menu->resume_button = init_button((sfVector2f){0, 0},
    (sfVector2f){0, 0}, "RESUME");
    pause_menu->settings_button = init_button((sfVector2f){0, 0},
    (sfVector2f){0, 0}, "SETTINGS");
    pause_menu->quit_button = init_button((sfVector2f){0, 0},
    (sfVector2f){0, 0}, "QUIT");
    pause_menu->load_button = init_button((sfVector2f){0, 0},
    (sfVector2f){0, 0}, "LOAD");
    pause_menu->save_button = init_button((sfVector2f){0, 0},
    (sfVector2f){0, 0}, "SAVE");

    return pause_menu;
}

void display_pause_menu(sfRenderWindow *window, pause_menu *pause_menu);
void destroy_pause_menu(pause_menu *pause_menu);
