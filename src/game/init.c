/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** init
*/

#include "../../include/main.h"

game *init_game(void)
{
    game *game = malloc(sizeof(*game));
    char **config_buf = parse_config_file();
    game->map = init_map();
    game->player = init_player(config_buf);
    game->camera = init_camera();
    game->clock = sfClock_create();
    game->pnjs = init_pnjs();
    game->num_pnjs = 0;
    return game;
}

map *init_map(void)
{
    map *map = malloc(sizeof(*map));
    map->name = "first_map";
    map->enemies = init_enemy();
    map->num_enemies = 0;
    map->height = MAP_HEIGHT;
    map->width = MAP_WIDTH;
    map->pnjs = init_pnjs();
    map->num_pnjs = 0;
}

player *init_player(char **config_buf)
{
    player *player = malloc(sizeof(*player));

    player->pos = (sfVector2f){PLAYER_START_POS_X, PLAYER_START_POS_Y};
    player->level = 1;
    player->xp = 0;
    player->health = 100;
    player->max_health = 100;
    player->strength = 20;
    player->inventory = init_inventory(config_buf);
    player->sprite = sfSprite_create();
    sfTexture *playerexture = sfTexture_createFromFile(PLAYER_TEXTURE_PATH,
    NULL);
    sfSprite_setTexture(player->sprite, playerexture, sfTrue);
    sfSprite_setPosition(player->sprite, player->pos);
    return player;
}
