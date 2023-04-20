/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** settings_event
*/

#include "../../include/main.h"
#include "../../include/settings.h"

void settings_event(sfRenderWindow *window, sfEvent *event, game *game)
{
    if (event->type == sfEvtKeyPressed) {
        if (event->key.code == sfKeyEscape)
            game->state->current_state = game->state->previous_state;
    }
}
