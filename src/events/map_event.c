/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** map_event
*/

#include "../../include/main.h"
#include "../../include/game.h"
#include "../../include/ui.h"

void handle_regular_events(sfRenderWindow *window, sfEvent *event, game *game)
{
    if (event->key.code == sfKeyR) {
        if (game->map->weather->is_raining == sfFalse)
            game->map->weather->is_raining = sfTrue;
        else
            game->map->weather->is_raining = sfFalse;
    }
    player_move(game, event);
    move_view(game, event, window);
}

void map_event(sfRenderWindow *window, sfEvent *event, game *game)
{
    if (event->type == sfEvtKeyPressed) {
        if (event->key.code == sfKeyEscape) {
            game->state->current_state = PAUSE;
            game->state->previous_state = MAP;
            return;
        }
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
