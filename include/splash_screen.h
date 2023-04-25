/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** splash_screen
*/

#ifndef SPLASH_SCREEN_H_
    #define SPLASH_SCREEN_H_
    #include <SFML/Graphics.h>
    #include "data.h"
    #pragma once

// Functions :
    splash_screen *init_splash_screen(void);
    void display_splash_screen(sfRenderWindow *window,
    game *game);
    void destroy_splash_screen(splash_screen *splash);

#endif /* !SPLASH_SCREEN_H_ */
