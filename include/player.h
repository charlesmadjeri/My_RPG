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
    #pragma once

// Macros:
    #define PLAYER_START_POS_X 960
    #define PLAYER_START_POS_Y 540
    #define PLAYER_TEXTURE_PATH "ressources/sprites/SpriteHero.png"

// Fonctions:
    player *init_player(char **config_buf);
    void display_player(sfRenderWindow *window, player *player);
    void destroy_player(player *player);

#endif /* !PLAYER_H_ */
