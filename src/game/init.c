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
    game->pnjs = init_pnjs();
    game->num_pnjs = 0;
    return game;
}

map_t *init_map(void)
{
    map_t *map = malloc(sizeof(map_t));
    map->name = "first_map";
    map->enemies = init_enemy();
    map->num_enemies = 0;
    map->height = MAP_HEIGHT;
    map->width = MAP_WIDTH;
    map->pnjs = init_pnjs();
    map->num_pnjs = 0;
}

player_t *init_player(void)
{
    player_t *player = malloc(sizeof(player_t));
    player->pos.x = 0;
    player->pos.y = 0;
    player->pos.z = 0;
    player->speed = 0.1;
    player->direction = 0;
    player->sprite = sfSprite_create();
    player->texture = sfTexture_createFromFile("assets/player.png", NULL);
    sfSprite_setTexture(player->sprite, player->texture, sfTrue);
    sfSprite_setPosition(player->sprite, player->pos);
    return player;
}