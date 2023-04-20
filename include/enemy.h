/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** enemy
*/

#ifndef ENEMY_H_
    #define ENEMY_H_
    #include <SFML/Graphics.h>
    #pragma once

// Structures :
    typedef struct enemy_t {
        char *name;
        int level;
        int health;
        int max_health;
        int strength;
    } enemy;

// Fonctions:
    enemy *init_enemy(void);
    void display_enemy(sfRenderWindow *window, enemy *enemy);
    void destroy_enemy(enemy *enemy);

#endif /* !ENEMY_H_ */
