/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-maxence.guy
** File description:
** pause_menu
*/

#ifndef PAUSE_MENU_H_
    #define PAUSE_MENU_H_
    #include <SFML/Graphics.h>
    #include <SFML/Graphics/Types.h>
    #include "data.h"
    #pragma once

// Macros:
    // #define PAUSE_MENU_WIDTH 1920
    // #define PAUSE_MENU_HEIGHT 1080

// Functions :
    pause_menu *init_pause_menu(void);
    void display_pause_menu(sfRenderWindow *window, pause_menu *pause_menu,
    game *game);
    void display_settings_pause(sfRenderWindow *window, game *game,
    sfView *view);
    void destroy_pause_menu(pause_menu *pause_menu);
    void set_view_to_center(sfRenderWindow *window, sfSprite *sprite,
    sfView *view);

    // void display_pause(sfWindow *window, pause_menu *pause_menu);

#endif /* !PAUSE_MENU_H_ */
