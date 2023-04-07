/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** game
*/

#ifndef GAME_H_
    #define GAME_H_
    #include <SFML/Graphics.h>
    #include "map.h"
    #include "player.h"
    #include "pnjs.h"
    #include "camera.h"
    #pragma once

// Structures :
    typedef struct game {
        map_t *map;
        player_t *player;
        pnjs_t *pnjs;
        int num_pnjs;
        sfClock *clock;
        camera_t *camera;
    } game_t;

// Fonctions:
    game_t *init_game(void);
    void save_game(game_t *game);
    void destroy_game(game_t *game);

#endif /* !GAME_H_ */
