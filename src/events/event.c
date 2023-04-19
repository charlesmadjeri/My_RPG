/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** events
*/

#include "../../include/main.h"
#include "../../include/game.h"
#include "../../include/events.h"
#include "../../include/ui.h"

void mouse_moved(sfRenderWindow *window, sfEvent *event, game *game)
{
    return;
}

void mouse_button_pressed(sfRenderWindow *window,
sfEvent *event, game *game)
{
    return;
}

void analyse_event(sfRenderWindow *window, sfEvent *event, game *game)
{
    if (event->type == sfEvtClosed)
        sfRenderWindow_close(window);
    if (event->type == sfEvtKeyPressed) {
        player_move(game, event);
        move_view(game, event, window);
    }
}
