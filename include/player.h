/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** player
*/

#ifndef PLAYER_H_
    #define PLAYER_H_
    #include <SFML/Graphics.h>
    #include "data.h"
    #include "ui.h"
    #pragma once

// Macros:
    #define PLAYER_START_POS_X 950
    #define PLAYER_START_POS_Y 2570
    #define PLAYER_TEXTURE_PATH "ressources/sprites/SpriteHero.png"
    #define TOP 231
    #define LEFT 77
    #define RIGHT 154
    #define BOTTOM 0
    #define ATHENA 1
    #define PNJ 2
    #define MINOTAURE 3
    #define DOOR 4
    #define MONSTER 5

// Fonctions:
    player *init_player(char **config_buf);
    void display_player(sfRenderWindow *window, player *player);
    void destroy_player(player *player);

#endif /* !PLAYER_H_ */
