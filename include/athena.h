/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** athena
*/

#ifndef ATHENA_H_
    #define ATHENA_H_
    #include <SFML/Graphics.h>
    #include "data.h"
    #pragma once

    #define ATHENA_SPRITE_PATH "ressources/sprites/athenaSprite.png"

// Fonctions:
    athena *init_athena(void);
    void display_athena(sfRenderWindow *window, game* game);
    void destroy_athena(athena *athena);

#endif /* !ATHENA_H_ */
