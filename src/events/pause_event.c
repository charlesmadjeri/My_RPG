/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** pause_event
*/

#include "../../include/main.h"
#include "../../include/pause_menu.h"

void pause_event(sfRenderWindow *window, sfEvent *event, game *game)
{
    if (event->type == sfEvtKeyPressed) {
        if (event->key.code == sfKeyEscape)
            game->state->current_state = game->state->previous_state;
    }
}
