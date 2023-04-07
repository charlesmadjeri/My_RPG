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
    #pragma once

// Macros:
    #define CONFIG_PATH "ressources/config/config.txt"

// Structures :
    typedef struct game_t {
        map *map;
        player *player;
        pnjs *pnjs;
        int num_pnjs;
        sfClock *clock;
    } game;

// Fonctions:
    char **parse_config_file(void);

    game *init_game(void);
    void save_game(game *game);
    void destroy_game(game *game);

#endif /* !GAME_H_ */
