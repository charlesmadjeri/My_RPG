/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-maxence.guy
** File description:
** settings
*/

#ifndef SETTINGS_H_
    #define SETTINGS_H_
    #include "data.h"
    #pragma once

// Macros:
    // #define SETTINGS_WIDTH 1920
    // #define SETTINGS_HEIGHT 1080

// Functions :
    settings *init_settings(void);
    void display_settings(sfRenderWindow *window, game *game);
    void destroy_settings(settings *settings);
    void set_view_to_center(sfRenderWindow *window, sfSprite *sprite,
    sfView *view);
    void display_settings_pause(sfRenderWindow *window, game *game,
    sfView *view);


#endif /* !SETTINGS_H_ */
