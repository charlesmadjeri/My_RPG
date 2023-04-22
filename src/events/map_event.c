/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** map_event
*/

#include "../../include/main.h"
#include "../../include/game.h"
#include "../../include/battle.h"
#include "../../include/ui.h"

static void entering_battle(game *game, sfEvent *event)
{
    if (event->key.code == sfKeyEnter
    && game->state->current_state != BATTLE) {
        game->battle->ennemy_type = MONSTER;
        init_ennemy(game->battle);
        game->state->current_state = BATTLE;
        game->state->previous_state = MAP;
        return;
    }
}

void map_event(sfRenderWindow *window, sfEvent *event, game *game)
{
    if (event->type == sfEvtKeyPressed) {
        if (event->key.code == sfKeyEscape) {
            game->state->current_state = PAUSE;
            game->state->previous_state = MAP;
            return;
        }
        entering_battle(game, event);
        if (event->key.code == sfKeyI) {
            game->state->current_state = INVENTORY;
            game->state->previous_state = MAP;
            return;
        } else {
            player_move(game, event);
            move_view(game, event, window);
            return;
        }
    }
}
