/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** map
*/

#ifndef MAP_H_
    #define MAP_H_
    #pragma once

    #include <SFML/Graphics.h>
    #include "enemy.h"
    #include "pnjs.h"

// Structures :
    typedef struct map {
        char name[64];
        int width;
        int height;
        char **tiles;
        enemy_t *enemies;
        int num_enemies;
        pnjs_t *pnjs;
        int num_pnjs;
    } map_t;

// Fonctions:
    void load_map(map_t *map, const char *filename);
    void unload_map(map_t *map);
    void render_map(map_t *map);

#endif /* !MAP_H_ */
