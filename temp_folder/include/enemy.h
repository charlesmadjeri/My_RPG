/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** enemy
*/

#ifndef ENEMY_H_
    #define ENEMY_H_
    #pragma once

    #include <SFML/Graphics.h>

// Structures :
    typedef struct enemy {
        char name[64];
        int level;
        int health;
        int max_health;
        int strength;
    } enemy_t;

// Fonctions:
    enemy_t *init_enemy(void);
    void display_enemy(sfRenderWindow *window, enemy_t *enemy);
    void destroy_enemy(enemy_t *enemy);

#endif /* !ENEMY_H_ */
