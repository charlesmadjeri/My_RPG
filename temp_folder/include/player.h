/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** player
*/

#ifndef PLAYER_H_
    #define PLAYER_H_
    #pragma once

    #include <SFML/Graphics.h>
    #include "inventory.h"

// Structures :
    typedef struct player {
        char name[64];
        int level;
        int experience;
        int health;
        int max_health;
        int strength;
        inventory_t *inventory;
        sfSprite *hero;
        sfVector2f pos;
        sfIntRect area;
    } player_t;

// Fonctions:
    player_t *init_player(void);
    void display_player(sfRenderWindow *window, player_t *player);
    void destroy_player(player_t *player);

#endif /* !PLAYER_H_ */
