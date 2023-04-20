/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** inventory_event
*/

#include "../../include/main.h"
#include "../../include/inventory.h"

void inventory_event(sfRenderWindow *window, sfEvent *event, game *game)
{
    if (event->type == sfEvtKeyPressed) {
        if (event->key.code == sfKeyEscape)
            game->state->current_state = game->state->previous_state;
    }
}
