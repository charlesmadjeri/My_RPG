/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** map
*/

#ifndef MAP_H_
    #define MAP_H_
    #include "enemy.h"
    #include "pnjs.h"
    #pragma once

// Macros:
    #define MAP_WIDTH 100
    #define MAP_HEIGHT 100

// Structures :
    typedef struct map {
        char *name;
        int width;
        int height;
        char **tiles;
        enemy_t *enemies;
        int num_enemies;
        pnjs_t *pnjs;
        int num_pnjs;
    } map_t;

// Fonctions:
    map_t *init_map(void);
    void save_map(map_t *map);
    void display_map(sfRenderWindow *window, map_t *map);

#endif /* !MAP_H_ */
