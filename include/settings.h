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
    typedef struct settings_t {
        int music_volume;
        int sound_volume;
        sfBool fullscreen;
        sfVector2i resolution;
        int fps;
    } settings;

// Functions :
    settings *init_settings(void);
    void display_settings(sfRenderWindow *window, settings *settings);
    void destroy_settings(settings *settings);

#endif /* !SETTINGS_H_ */
