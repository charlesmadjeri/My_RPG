/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** minotaure
*/

#ifndef MINOTAURE_H_
    #define MINOTAURE_H_
    #include <SFML/Graphics.h>
    #include "data.h"
    #pragma once

    #define MINO_SPRITE_PATH "ressources/sprites/minotaureSprite.png"

// Fonctions:
    minotaure *init_minotaure(void);
    void display_minotaure(sfRenderWindow *window, game* game);
    void destroy_minotaure(minotaure *minotaure);

#endif /* !MINOTAURE_H_ */
