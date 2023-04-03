/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** splash_screen
*/

#ifndef SPLASH_SCREEN_H_
    #define SPLASH_SCREEN_H_
    #pragma once

    #include <SFML/Graphics.h>

// Structures :
    typedef struct splash_screen {
        sfTexture *texture;
        sfSprite *sprite;
        sfClock *clock;
        sfTime time;
        float seconds;
    } splash_screen_t;

// Functions :
    splash_screen_t *init_splash_screen(void);
    void display_splash_screen(sfRenderWindow *window, splash_screen_t *splash_screen);
    void destroy_splash_screen(splash_screen_t *splash_screen);

#endif /* !SPLASH_SCREEN_H_ */
