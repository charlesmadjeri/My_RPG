/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** init
*/

#include "../../include/main.h"
#include "../../include/game.h"
#include "../../include/map.h"
#include "../../include/player.h"
#include "../../include/inventory.h"
#include "../../include/pnjs.h"
#include <SFML/System/Clock.h>
#include <stdbool.h>

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

    player->pos = (sfVector2f){PLAYER_START_POS_X, PLAYER_START_POS_Y};
    player->level = 1;
    player->xp = 0;
    player->health = 100;
    player->max_health = 100;
    player->strength = 20;
    player->inventory = init_inventory();
    player->sprite = sfSprite_create();
    sfTexture *player_texture = sfTexture_createFromFile(PLAYER_TEXTURE_PATH,
    NULL);
    sfSprite_setTexture(player->sprite, player_texture, sfTrue);
    sfSprite_setPosition(player->sprite, player->pos);
    return player;
}
