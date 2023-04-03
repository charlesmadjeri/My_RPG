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

    typedef struct player {
        char name[64];
        int level;
        int experience;
        int health;
        int max_health;
        int strength;
        inventory_t inventory;
    } player_t;

#endif /* !PLAYER_H_ */
