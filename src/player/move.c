/*
** EPITECH PROJECT, 2023
** undefined
** File description:
** move.c
*/

#include "../../include/game.h"

sfIntRect find_rect(sfIntRect old_rect, char dir)
{
    if (dir == 'T')
        old_rect.top = 231;
    if (dir == 'L')
        old_rect.top = 77;
    if (dir == 'R')
        old_rect.top = 154;
    if (dir == 'B')
        old_rect.top = 0;
    if (old_rect.left == 231) {
        old_rect.left = 0;
        return old_rect;
    }
    old_rect.left += 77;
    return old_rect;
}

void player_move(game *game, sfEvent *event)
{
    if (sfKeyboard_isKeyPressed(sfKeyZ)) {
        sfIntRect old_rect = sfSprite_getTextureRect(game->player->sprite);
        sfIntRect rect = find_rect(old_rect, 'T'); game->player->area = rect;
        sfSprite_setTextureRect(game->player->sprite, game->player->area);
    }
    if (sfKeyboard_isKeyPressed(sfKeyQ)) {
        sfIntRect old_rect = sfSprite_getTextureRect(game->player->sprite);
        sfIntRect rect = find_rect(old_rect, 'L'); game->player->area = rect;
        sfSprite_setTextureRect(game->player->sprite, game->player->area);
    }
    if (sfKeyboard_isKeyPressed(sfKeyD)) {
        sfIntRect old_rect = sfSprite_getTextureRect(game->player->sprite);
        sfIntRect rect = find_rect(old_rect, 'R'); game->player->area = rect;
        sfSprite_setTextureRect(game->player->sprite, game->player->area);
    }
    if (sfKeyboard_isKeyPressed(sfKeyS)) {
        sfIntRect old_rect = sfSprite_getTextureRect(game->player->sprite);
        sfIntRect rect = find_rect(old_rect, 'B'); game->player->area = rect;
        sfSprite_setTextureRect(game->player->sprite, game->player->area);
    }
}
