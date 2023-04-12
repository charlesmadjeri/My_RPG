/*
** EPITECH PROJECT, 2023
** undefined
** File description:
** move.c
*/

#include "../../include/game.h"

void player_move(game *game, sfEvent *event)
{
    if (sfKeyboard_isKeyPressed(sfKeyZ)) {
        sfIntRect rect = {0, 231, 77, 77};
        game->player->area = rect;
        sfSprite_setTextureRect(game->player->sprite, game->player->area);
    }
    if (sfKeyboard_isKeyPressed(sfKeyQ)) {
        sfIntRect rect = {0, 77, 77, 77};
        game->player->area = rect;
        sfSprite_setTextureRect(game->player->sprite, game->player->area);
    }
    if (sfKeyboard_isKeyPressed(sfKeyD)) {
        sfIntRect rect = {0, 154, 77, 77};
        game->player->area = rect;
        sfSprite_setTextureRect(game->player->sprite, game->player->area);
    }
    if (sfKeyboard_isKeyPressed(sfKeyS)) {
        sfIntRect rect = {0, 0, 77, 77};
        game->player->area = rect;
        sfSprite_setTextureRect(game->player->sprite, game->player->area);
    }
}
