/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** player
*/

#include "../../include/main.h"

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
