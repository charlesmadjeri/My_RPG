/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** player
*/

#ifndef PLAYER_H_
    #define PLAYER_H_
    #include <SFML/Graphics.h>
    #include "inventory.h"
    #pragma once

// Macros:
    #define PLAYER_START_POS_X 0
    #define PLAYER_START_POS_Y 0
    #define PLAYER_TEXTURE_PATH "ressources/player.png"

// Structures :
    typedef struct player_t {
        char *name;
        int level;
        int xp;
        int health;
        int max_health;
        int strength;
        inventory *inventory;
        sfVector2f pos;
        sfSprite *sprite;
    } player;

// Fonctions:
    player *init_player(char **config_buf);
    void display_player(sfRenderWindow *window, player *player);
    void destroy_player(player *player);

#endif /* !PLAYER_H_ */
