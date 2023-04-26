/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** level_up
*/

#include "../../include/main.h"
#include "../../include/game.h"

void level_up(player *player)
{
    if (player->xp >= 100 && player->level == 1) {
        player->level = 2;
        player->xp = 0;
        player->max_health = 150;
        if (player->health < 130)
            player->health = 130;
        player->strength = 60;
    }
    if (player->xp >= 100 && player->level == 2) {
        player->level = 3;
        player->xp = 0;
        player->max_health = 225;
        if (player->health < 200)
            player->health = 200;
        player->strength = 100;
    }
}
