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
    typedef struct splash_screen_t {
        sfTexture *texture;
        sfSprite *sprite;
        sfClock *clock;
        sfTime time;
        float seconds;
    } splash_screen;

// Functions :
    splash_screen *init_splash_screen(void);
    void display_splash_screen(sfRenderWindow *window,
    splash_screen *splash_screen);
    void destroy_splash_screen(splash_screen *splash_screen);

#endif /* !SPLASH_SCREEN_H_ */
