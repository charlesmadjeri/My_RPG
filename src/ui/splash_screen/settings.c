/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-maxence.guy
** File description:
** settings
*/

#include "../../../include/main.h"

settings *init_settings(void)
{
    settings *settings = malloc(sizeof(*settings));

    settings->music_volume = 100;
    settings->sound_volume = 100;
    settings->fullscreen = false;
    settings->resolution = (sfVector2i){WINDOW_WIDTH, WINDOW_HEIGHT};
    settings->fps = 60;

    return settings;
}

void save_settings(settings *settings);
