/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** enemy
*/

#ifndef ENEMY_H_
    #define ENEMY_H_
    #pragma once

    typedef struct enemy {
        char name[64];
        int level;
        int health;
        int max_health;
        int strength;
    } enemy_t;

#endif /* !ENEMY_H_ */
