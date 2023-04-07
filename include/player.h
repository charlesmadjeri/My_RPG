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
    typedef struct player {
        char *name;
        int level;
        int xp;
        int health;
        int max_health;
        int strength;
        inventory_t *inventory;
        sfVector2f pos;
        sfSprite *sprite;
    } player_t;

// Fonctions:
    player_t *init_player(void);
    void display_player(sfRenderWindow *window, player_t *player);
    void destroy_player(player_t *player);

#endif /* !PLAYER_H_ */
