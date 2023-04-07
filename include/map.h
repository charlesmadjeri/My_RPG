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
    typedef struct map_t {
        char *name;
        int width;
        int height;
        char **tiles;
        enemy *enemies;
        int num_enemies;
        pnjs *pnjs;
        int num_pnjs;
    } map;

// Fonctions:
    map *init_map(void);
    void save_map(map *map);
    void display_map(sfRenderWindow *window, map *map);

#endif /* !MAP_H_ */
