/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** player
*/

#include "../../include/main.h"
#include "../../include/player.h"
#include "../../include/inventory.h"

player *init_player(char **config_buf)
{
    player *player = malloc(sizeof(*player));
    sfIntRect rect = {0, 231, 77, 77};
    player->pos = (sfVector2f) {PLAYER_START_POS_X, PLAYER_START_POS_Y};
    player->level = 1;
    player->xp = 0;
    player->xp_max = 100;
    player->health = 100;
    player->intersection = 0;
    player->max_health = 100;
    player->strength = 20;
    player->game_len = 0;
    player->inventory = init_inventory();
    player->sprite = sfSprite_create();
    player->area = rect;
    sfTexture *player_texture = sfTexture_createFromFile(PLAYER_TEXTURE_PATH,
    NULL);
    sfSprite_setTexture(player->sprite, player_texture, sfTrue);
    sfSprite_setPosition(player->sprite, player->pos);
    sfSprite_setTextureRect(player->sprite, player->area);
    return player;
}

void display_player(sfRenderWindow *window, player *player)
{
    sfRenderWindow_drawSprite(window, player->sprite, NULL);
}
