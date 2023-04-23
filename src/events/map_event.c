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

static void entering_battle(sfRenderWindow *window, game *game, sfEvent *event)
{
    if (event->key.code == sfKeyEnter
    && game->state->current_state != BATTLE) {
        game->battle->ennemy_type = CYCLOPE_T;
        init_ennemy(game->battle);
        game->state->current_state = BATTLE;
        game->state->previous_state = MAP;
        return;
    }
}

void handle_regular_events(sfRenderWindow *window, sfEvent *event, game *game)
{
    if (event->key.code == sfKeyR) {
        if (game->map->weather->is_raining == sfFalse)
            game->map->weather->is_raining = sfTrue;
        else
            game->map->weather->is_raining = sfFalse;
    }
    if (sfTime_asSeconds(sfClock_getElapsedTime(game->clocks->player)) > 0.1) {
        player_move(game, event); sfClock_restart(game->clocks->player);
    }
    if (sfTime_asSeconds(sfClock_getElapsedTime(game->clocks->view)) > 0.01) {
        move_view(game, event, window); sfClock_restart(game->clocks->view);
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
        entering_battle(window, game, event);
        if (event->key.code == sfKeyI) {
            game->state->current_state = INVENTORY;
            game->state->previous_state = MAP;
            return;
        } else {
            handle_regular_events(window, event, game);
            return;
        }
    }
}
