/*
** EPITECH PROJECT, 2023
** undefined
** File description:
** move.c
*/

#include "../../include/game.h"
#include "../../include/events.h"
#include <stdbool.h>

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

void player_move(game *game, sfEvent *event, sfVector2f pos)
{
    if (sfKeyboard_isKeyPressed(sfKeyZ) && gest_col(game, pos.x, (pos.y - 1))) {
        sfIntRect old_rect = sfSprite_getTextureRect(game->player->sprite);
        sfIntRect rect = find_rect(old_rect, 'T'); game->player->area = rect;
        sfSprite_setTextureRect(game->player->sprite, game->player->area);
    }
    if (sfKeyboard_isKeyPressed(sfKeyQ) && gest_col(game, (pos.x - 1), pos.y)) {
        sfIntRect old_rect = sfSprite_getTextureRect(game->player->sprite);
        sfIntRect rect = find_rect(old_rect, 'L'); game->player->area = rect;
        sfSprite_setTextureRect(game->player->sprite, game->player->area);
    }
    if (sfKeyboard_isKeyPressed(sfKeyD) && gest_col(game, (pos.x + 1), pos.y)) {
        sfIntRect old_rect = sfSprite_getTextureRect(game->player->sprite);
        sfIntRect rect = find_rect(old_rect, 'R'); game->player->area = rect;
        sfSprite_setTextureRect(game->player->sprite, game->player->area);
    }
    if (sfKeyboard_isKeyPressed(sfKeyS) && gest_col(game, pos.x, (pos.y + 1))) {
        sfIntRect old_rect = sfSprite_getTextureRect(game->player->sprite);
        sfIntRect rect = find_rect(old_rect, 'B'); game->player->area = rect;
        sfSprite_setTextureRect(game->player->sprite, game->player->area);
    }
}
