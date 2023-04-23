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

    #define HELP_PATH "ressources/maps/help.png"
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

    #define LEVEL_1_PATH "ressources/maps/infos/level_1.png"
    #define LEVEL_2_PATH "ressources/maps/infos/level_2.png"
    #define LEVEL_3_PATH "ressources/maps/infos/level_3.png"
    #define XP_BAR_0_PATH "ressources/maps/infos/xp_bar_0.png"
    #define XP_BAR_1_PATH "ressources/maps/infos/xp_bar_1.png"
    #define XP_BAR_2_PATH "ressources/maps/infos/xp_bar_2.png"
    #define XP_BAR_3_PATH "ressources/maps/infos/xp_bar_3.png"
    #define XP_BAR_4_PATH "ressources/maps/infos/xp_bar_4.png"
    #define LIFE_BAR_0_PATH "ressources/maps/infos/life_bar_0.png"
    #define LIFE_BAR_1_PATH "ressources/maps/infos/life_bar_1.png"
    #define LIFE_BAR_2_PATH "ressources/maps/infos/life_bar_2.png"
    #define LIFE_BAR_3_PATH "ressources/maps/infos/life_bar_3.png"
    #define LIFE_BAR_4_PATH "ressources/maps/infos/life_bar_4.png"
    #define LIFE_BAR_5_PATH "ressources/maps/infos/life_bar_5.png"
    #define LIFE_BAR_6_PATH "ressources/maps/infos/life_bar_6.png"
    #define SPELL_BAR_0_PATH "ressources/maps/infos/Barre-4.png"
    #define SPELL_BAR_1_PATH "ressources/maps/infos/Barre-3.png"
    #define SPELL_BAR_2_PATH "ressources/maps/infos/Barre-2.png"
    #define SPELL_BAR_3_PATH "ressources/maps/infos/Barre-1.png"

// Fonctions:
    map *init_map(void);
    void make_map_texture(map_data *map_data);
    void display_map(sfRenderWindow *window, game *game);

    void load_matrice(map_data *map_data);
    sfSprite *create_sprite_from_rend_tex(sfRenderTexture *map_render_tex);

    sfSprite *create_rain_sprite(void);
    sfSprite *create_cloud_sprite(void);
    void display_weather(sfRenderWindow *window, game *game);

    level_nb *init_level_nb(void);
    life_bar *init_life_bar(void);
    spell_bar *init_spell_bar(void);
    xp_bar *init_xp_bar(void);
    sfSprite *create_life_bar_sprite(char *path);
    void display_level(sfRenderWindow *window,
    player *player, level_nb *level_nb);
    void display_xp_bar(sfRenderWindow *window,
    player *player, xp_bar *xp_bar);
    void display_life_bar(sfRenderWindow *window,
    player *player, life_bar *life_bar);
    void display_spell_bar(sfRenderWindow *window, battle *battle,
    spell_bar *spell_bar);
    void display_infos(sfRenderWindow *window, game *game);

#endif /* !MAP_H_ */
