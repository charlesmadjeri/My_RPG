/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** game
*/

#include "../../include/main.h"

game *init_game(void)
{
    game *game = malloc(sizeof(*game));
    char **config_buf = NULL; //parse_config_file();
    game->map = init_map();
    game->player = init_player(config_buf);
    game->clock = sfClock_create();
    game->pnjs = init_pnjs();
    game->num_pnjs = 0;
    return game;
}

void save_game(game *game);
void destroy_game(game *game);
