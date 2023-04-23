/*
** EPITECH PROJECT, 2023
** Delivery
** File description:
** interaction
*/

#include "../../include/main.h"
#include "../../include/player.h"
#include "../../include/game.h"
#include "../../include/battle.h"
#include "../../include/events.h"
#include "../../include/ui.h"

static is_interaction_ennemy(game* game, sfVector2f player_pos)
{
    if (player_pos.x > 860 - 77 && player_pos.x < 860 + 77)
        if (player_pos.y > 1640 - 77 && player_pos.y < 1640 + 77) {
            game->player->intersection = MINOTAURE; return;
        }
    if (player_pos.x > 4520 - 77 && player_pos.x < 4520 + 77)
        if (player_pos.y > 500 - 77 && player_pos.y < 500 + 77) {
            game->player->intersection = DOOR; return;
        }
    if (player_pos.x > 1410 - 77 && player_pos.x < 1410 + 77)
        if (player_pos.y > 2460 - 77 && player_pos.y < 2460 + 77) {
            game->player->intersection = MONSTER; return;
        }
}

void is_interaction(game *game)
{
    sfVector2f player_pos = sfSprite_getPosition(game->player->sprite);
    sfVector2f pnj_pos = sfSprite_getPosition(game->pnjs->sprite);
    if (player_pos.x > 1240 - 77 && player_pos.x < 1240 + 77)
        if (player_pos.y > 2440 - 77 && player_pos.y < 2440 + 77) {
            game->player->intersection = ATHENA; return;
        }
    is_interaction_ennemy(game, player_pos);
    if (player_pos.x > pnj_pos.x - 77 && player_pos.x < pnj_pos.x + 77)
        if (player_pos.y > pnj_pos.y - 77 && player_pos.y < pnj_pos.y + 77) {
            game->player->intersection = PNJ; return;
        }
    game->player->intersection = 0;
    return;
}
