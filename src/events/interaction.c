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

static is_interaction_ennemy(sfRenderWindow *window, game* game, sfVector2f player_pos)
{
    if (player_pos.x > 760 && player_pos.x < 950) {
        if (player_pos.y > 1490 && player_pos.y < 1620
        && game->player->game_len == 2) {
            game->player->intersection = MINOTAURE;
            game->player->game_len = 3;
            game->text->len = 4;
            entering_battle(window, game);
        }
    }
    if (player_pos.x > 4520 - 77 && player_pos.x < 4520 + 77) {
        if (player_pos.y > 500 - 77 && player_pos.y < 500 + 77) {
            game->player->intersection = DOOR; return;
        }
    } else
        game->player->intersection = 8; return;
    if (player_pos.x > 1410 - 77 && player_pos.x < 1410 + 77) {
        if (player_pos.y > 2460 - 77 && player_pos.y < 2460 + 77) {
            game->player->intersection = MONSTER; return;
        }
    } else
        game->player->intersection = 8; return;
}

void is_interaction(sfRenderWindow *window, game *game)
{
    sfVector2f player_pos = sfSprite_getPosition(game->player->sprite);
    sfVector2f pnj_pos = sfSprite_getPosition(game->pnjs->sprite);
    if (player_pos.x > 1240 - 77 && player_pos.x < 1240 + 77)
        if (player_pos.y > 2440 - 77 && player_pos.y < 2440 + 77) {
            game->player->intersection = ATHENA; return;
        }
    is_interaction_ennemy(window, game, player_pos);
    if (player_pos.x > pnj_pos.x - 77 && player_pos.x < pnj_pos.x + 77)
        if (player_pos.y > pnj_pos.y - 77 && player_pos.y < pnj_pos.y + 77) {
            game->player->intersection = PNJ; return;
        }
    if (player_pos.x == 4520 && player_pos.y == 500) {
            game->player->intersection = DOOR;return;
    }
    game->player->intersection = 0;
    return;
}
