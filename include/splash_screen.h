/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** splash_screen
*/

#ifndef SPLASH_SCREEN_H_
    #define SPLASH_SCREEN_H_
    #include <SFML/Graphics.h>
    #pragma once

// Structures :
    typedef struct splash_screen {
        sfTexture *texture_start;
        sfTexture *texture_continue;
        sfTexture *texture_help;
        sfTexture *texture_quit;
        sfSprite *start;
        sfSprite *continued;
        sfSprite *help;
        sfSprite *quit;
        sfVector2f pos_start;
        sfVector2f pos_continue_game;
        sfVector2f pos_help;
        sfVector2f pos_quit;
    } splash_screen_t;

// Functions :
    splash_screen_t *init_splash_screen(sfRenderWindow *window,
    sfVector2f size, sfVector2f position, sfMouseButtonEvent event);
    void display_splash_screen(sfRenderWindow *window,
    splash_screen_t *splash);
    void destroy_splash_screen(splash_screen_t *splash);

#endif /* !SPLASH_SCREEN_H_ */
