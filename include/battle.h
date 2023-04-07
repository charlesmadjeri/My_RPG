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
    typedef struct battle {
        sfSprite *background;
        sfTexture *texture;
        sfVector2f position;
        sfIntRect rect;
    } battle_t;

// Functions :
    battle_t *init_battle(void);
    void display_battle(sfRenderWindow *window, battle_t *battle);
    void destroy_battle(battle_t *battle);

#endif /* !BATTLE_H_ */
