/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** battle
*/

#ifndef BATTLE_H_
    #define BATTLE_H_
    #include <SFML/Graphics.h>
    #pragma once

// Structures :
    typedef struct battle_t {
        sfSprite *background;
        sfTexture *texture;
        sfVector2f position;
        sfIntRect rect;
    } battle;

// Functions :
    battle *init_battle(void);
    void display_battle(sfRenderWindow *window, battle *battle);
    void destroy_battle(battle *battle);

#endif /* !BATTLE_H_ */
