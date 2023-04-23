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

void is_interaction(game *game)
{
    sfVector2f player_pos = sfSprite_getPosition(game->player->sprite);
    sfVector2f pnj_pos = sfSprite_getPosition(game->pnjs->sprite);
    if (player_pos.x > 1240 - 77 && player_pos.x < 1240 + 77)
        if (player_pos.y > 2440 - 77 && player_pos.y < 2440 + 77) {
            game->player->intersection = ATHENA; return;
        }
    if (player_pos.x > pnj_pos.x - 77 && player_pos.x < pnj_pos.x + 77)
        if (player_pos.y > pnj_pos.y - 77 && player_pos.y < pnj_pos.y + 77) {
            game->player->intersection = PNJ; return;
        }
    game->player->intersection = 0;
    return;
}
