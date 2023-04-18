/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** map
*/

#ifndef MAP_H_
    #define MAP_H_
    #include <SFML/Graphics/Types.h>
    #include "data.h"
    #pragma once

// Macros:
    #define MATRICE_PATH "ressources/maps/map.txt"
    #define MAP_WIDTH 36 // in tiles
    #define MAP_HEIGHT 21 // in tiles
    #define TILE_SIZE_X 150 // in pixels
    #define TILE_SIZE_Y 150 // in pixels

    #define G_PATH "ressources/maps/grass.png"
    #define P_PATH "ressources/maps/path.png"
    #define S_R_PATH "ressources/maps/road.png"
    #define S_PATH "ressources/maps/sand.png"
    #define F_B_D_PATH "ressources/maps/dungeon_door.png"
    #define M_PATH "ressources/maps/mountains.png"
    #define W_PATH "ressources/maps/water.png"
    #define U_M_PATH "ressources/maps/steps.png"
    #define D_T_PATH "ressources/maps/dead_trees.png"
    #define C_W_PATH "ressources/maps/city_wall.png"
    #define H_PATH "ressources/maps/house.png"

// Fonctions:
    map *init_map(void);
    void make_map_texture(map_data *map_data);
    void display_map(sfRenderWindow *window, map *map);

#endif /* !MAP_H_ */
