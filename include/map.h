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
    #define MAP_WIDTH_PX 5400 // in pixels
    #define MAP_HEIGHT_PX 3150 // in pixels
    #define TILE_SIZE_X 150 // in pixels
    #define TILE_SIZE_Y 150 // in pixels

    #define CLOUDS_PATH "ressources/maps/weather/clouds.png"
    #define RAINDROP_PATH "ressources/maps/weather/rain.png"
    #define NB_CLOUDS 50
    #define CLOUDS_SPEED 0.016
    #define RAIN_SPEED 0.016
    #define CLOUDS_MOVE_AMOUNT 1
    #define RAIN_MOVE_AMOUNT 4
    #define CLOUDS_WIDTH 564
    #define RAINDROP_HEIGHT 603

    #define G_PATH "ressources/maps/textures/grass.png"
    #define P_PATH "ressources/maps/textures/path.png"
    #define R_PATH "ressources/maps/textures/road.png"
    #define SA_PATH "ressources/maps/textures/sand.png"
    #define D_D_PATH "ressources/maps/textures/dungeon_door.png"
    #define M_PATH "ressources/maps/textures/mountains.png"
    #define W_PATH "ressources/maps/textures/water.png"
    #define ST_PATH "ressources/maps/textures/steps.png"
    #define D_T_PATH "ressources/maps/textures/dead_trees.png"
    #define C_W_PATH "ressources/maps/textures/city_wall.png"
    #define H_PATH "ressources/maps/textures/house.png"

// Fonctions:
    map *init_map(void);
    void make_map_texture(map_data *map_data);
    void display_map(sfRenderWindow *window, game *game);

    void load_matrice(map_data *map_data);
    sfSprite *create_sprite_from_rend_tex(sfRenderTexture *map_render_tex);

    sfSprite *create_rain_sprite(void);
    sfSprite *create_cloud_sprite(void);
    void display_weather(sfRenderWindow *window, game *game);

#endif /* !MAP_H_ */
