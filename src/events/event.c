/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** events
*/

#include "../../include/main.h"
#include "../../include/game.h"

void mouse_moved(sfRenderWindow *window, sfEvent *event, game_t *game)
{
    return;
}

void mouse_button_pressed(sfRenderWindow *window,
sfEvent *event, struct game_s *game)
{
    return;
}

void analyse_event(sfRenderWindow *window, sfEvent *event, game_t *game)
{
    if (event->type == sfEvtClosed)
        sfRenderWindow_close(window);
    /*
    if (event->type == sfEvtMouseMoved)
        mouse_moved(window, event, game);
    if (event->type == sfEvtMouseButtonPressed)
        mouse_button_pressed(window, event, game);
    if (event->type == sfEvtMouseButtonReleased)
        game->mouse_pressed = sfFalse;
    */
}
