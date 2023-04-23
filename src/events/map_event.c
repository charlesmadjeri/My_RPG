/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** map_event
*/

#include "../../include/main.h"
#include "../../include/game.h"
#include "../../include/battle.h"
#include "../../include/pause_menu.h"
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
    sfVector2f p_player = sfSprite_getPosition(game->player->sprite);
    if (event->key.code == sfKeyT) {
        if (game->map->disp_help == sfFalse)
            game->map->disp_help = sfTrue;
        else
            game->map->disp_help = sfFalse;
    }
    if (sfTime_asSeconds(sfClock_getElapsedTime(game->clocks->player)) > 0.1) {
        player_move(game, event, p_player);
        sfClock_restart(game->clocks->player);
    }
    if (sfTime_asSeconds(sfClock_getElapsedTime(game->clocks->view)) > 0.01) {
        move_view(game, event, window); sfClock_restart(game->clocks->view);
    }
}

void handle_pause_menu_for_the_fucking_codn_style(sfRenderWindow *window,
sfEvent *event, game *game)
{
        if (event->key.code == sfKeySpace) {
            game->state->current_state = PAUSE;
            game->state->previous_state = MAP;
            return;
        }
}

void map_event(sfRenderWindow *window, sfEvent *event, game *game)
{
    if (event->type == sfEvtKeyPressed) {
        entering_battle(window, game, event);
        if (event->key.code == sfKeyEscape) {
            game->state->current_state = PAUSE;
            game->state->previous_state = MAP;
            return;
        }
        if (event->key.code == sfKeyI) {
            game->state->current_state = INVENTORY;
            game->state->previous_state = MAP;
            return;
        }
        handle_pause_menu_for_the_fucking_codn_style(window, event, game);
        handle_regular_events(window, event, game);
        return;
    }
}
