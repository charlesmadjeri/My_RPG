/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** game
*/

#ifndef GAME_H_
    #define GAME_H_
    #include <SFML/Graphics.h>
    #include "data.h"
    #pragma once

// Macros:
    #define CONFIG_PATH "ressources/config/config.txt"

// Fonctions:
    char **parse_config_file(void);
    game *init_game(void);
    void save_game(game *game);
    void destroy_game(game *game);

    void player_move(game *game, sfEvent *event, sfVector2f pos);

    void display_text(game* game, sfRenderWindow *window, text* text);
    void display_monster(sfRenderWindow *window, game *game);
    text* init_text(game* game);

    clocks *init_clocks(void);
    clocks *init_clock(void);

#endif /* !GAME_H_ */
