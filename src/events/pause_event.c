/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** pause_event
*/

#include "../../include/main.h"
#include "../../include/pause_menu.h"
#include "../../include/game.h"
#include "../../include/events.h"
#include <SFML/Graphics/Sprite.h>

void pause_event(sfRenderWindow *window, sfEvent *event, game *game)
{
    if (event->type == sfEvtKeyPressed) {
        if (event->key.code == sfKeyEscape)
            game->state->current_state = game->state->previous_state;
    } else {
        set_view_to_center(window, game->pause_menu->menu,
        game->view);
    }
}
