/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** init
*/

#include "../../include/main.h"
#include "../../include/game.h"
#include <SFML/System/Clock.h>

game_t *init_game(void)
{
    game_t *game = malloc(sizeof(game_t));
    game->map = init_map();
    game->player = init_player();
    game->camera = init_camera();
    game->clock = sfClock_create();
    game->enemies = init_enemy();
    game->num_enemies = 0;
    game->pnjs = init_pnjs();
    game->num_pnjs = 0;
    return game;
}
