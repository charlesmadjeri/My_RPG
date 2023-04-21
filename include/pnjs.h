/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** pnjs
*/

#ifndef PNJS_H_
    #define PNJS_H_
    #include <SFML/Graphics.h>
    #include "data.h"
    #pragma once

#define VILLAGER_SPRITE_PATH "ressources/sprites/SpriteVillager.png"

// Fonctions:
    pnjs *init_pnjs(void);
    void display_pnjs(sfRenderWindow *window, pnjs *pnjs);
    void destroy_pnjs(pnjs *pnjs);
    // void check_pnj(game* game);

#endif /* !PNJS_H_ */
