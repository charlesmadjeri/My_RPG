/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** ui
*/

#ifndef UI_H_
    #define UI_H_
    #include <SFML/Graphics.h>
    #include "data.h"
    #pragma once

// Macros :
    #define WINDOW_WIDTH 1920
    #define WINDOW_HEIGHT 1080
    #define MUSIC_PATH "ressources/music/music.ogg"

// Functions:
    sfRenderWindow *init_window(void);
    sfView *init_view(void);
    sfMusic *init_music(void);
    void display(sfRenderWindow *window, game *game);

    void refresh_view(sfRenderWindow *window, game *game);
    void move_view(game *game, sfEvent *event, sfRenderWindow *window);
    void set_view_to_center(sfRenderWindow *window,
    sfSprite *sprite, sfView *view);

#endif /* !UI_H_ */
