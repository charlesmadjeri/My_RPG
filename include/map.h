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
    #include <SFML/Graphics/Types.h>
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

// Structures :
    typedef struct textures_t {
        sfTexture *grass;
        sfTexture *pass;
        sfTexture *stone_road;
        sfTexture *sand;
        sfTexture *bridge;
        sfTexture *final_boss_dungeon;
        sfTexture *mountains;
        sfTexture *water;
        sfTexture *unattackable_monster;
        sfTexture *dead_trees;
        sfTexture *city_wall;
        sfTexture *house;
    } textures;

    typedef struct map_data_t {
        sfRenderTexture *map_render_tex;
        const sfTexture *map_final_tex;
        textures *textures;
        int **matrice;
    } map_data;
    typedef struct map_t {
        sfSprite *map_sprite;
        map_data *map_data;
        enemy *enemies;
        int num_enemies;
        pnjs *pnjs;
        int num_pnjs;
    } map;

// Fonctions:
    map *init_map(void);
    void make_map_texture(map_data *map_data);
    void display_map(sfRenderWindow *window, map *map);

#endif /* !MAP_H_ */
