/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** battle_event
*/

#include "../../include/main.h"
#include "../../include/battle.h"

void battle_event(sfRenderWindow *window, sfEvent *event, game *game)
{
    if (event->type == sfEvtKeyPressed) {
        if (event->key.code == sfKeyEscape) {
            game->state->current_state = PAUSE;
            game->state->previous_state = BATTLE;
        } else {
            battle_event(window, event, game);
        }
    }
}
