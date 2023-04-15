/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-maxence.guy
** File description:
** settings
*/

#ifndef SETTINGS_H_
    #define SETTINGS_H_
    #include "button.h"
    #include <SFML/System/Vector2.h>
    #pragma once

// Macros:
    #define SETTINGS_WIDTH 1920
    #define SETTINGS_HEIGHT 1080

// Structures :
    typedef struct settings {
        int music_volume;
        int sound_volume;
        sfBool fullscreen;
        sfTexture *texture_music;
        sfTexture *texture_sound;
        sfTexture *texture_resolutions;
        sfSprite *music;
        sfSprite *sound;
        sfSprite *resolutions;
        sfVector2f pos_music;
        sfVector2f pos_sound;
        sfVector2f pos_resolutions;
        int fps;
    } settings_t;

// Functions :
    settings_t *init_settings(sfVector2f position, sfRenderWindow *window);
    void display_settings(sfRenderWindow *window, settings_t *settings);
    void destroy_settings(settings_t *settings);

#endif /* !SETTINGS_H_ */
