/*
** EPITECH PROJECT, 2022
** repo
** File description:
** settings_pause.c
*/

#include "../../include/main.h"
#include "../../include/settings.h"

void settings_pause_event(sfRenderWindow *window, sfEvent *event, game *game)
{
    if (event->type == sfEvtKeyPressed) {
        if (event->key.code == sfKeyEscape)
            game->state->current_state = game->state->previous_state;
    } else {
        set_view_to_center(window, game->settings->parchment,
        game->view);
    }
}
