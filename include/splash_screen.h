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
        sfSprite *background;
        sfSprite *start;
        sfSprite *continued;
        sfSprite *help;
        sfSprite *quit;
    } splash_screen_t;

// Functions :
    splash_screen_t *init_splash_screen(void);
    void display_splash_screen(sfRenderWindow *window,
    splash_screen_t *splash);
    void destroy_splash_screen(splash_screen_t *splash);

#endif /* !SPLASH_SCREEN_H_ */
