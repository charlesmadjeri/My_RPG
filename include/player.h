/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** player
*/

#ifndef PLAYER_H_
    #define PLAYER_H_
    #pragma once

    #include "inventory.h"

// Structures :
    typedef struct player {
        char name[64];
        int level;
        int experience;
        int health;
        int max_health;
        int strength;
        inventory_t inventory;
    } player_t;

// Fonctions:
    player_t *init_player(void);
    void destroy_player(player_t *player);

#endif /* !PLAYER_H_ */
