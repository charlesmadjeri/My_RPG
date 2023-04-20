/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** splash_event
*/

#include "../../include/main.h"
#include "../../include/splash_screen.h"

void splash_event(sfRenderWindow *window, sfEvent *event, game *game)
{
    if (event->type == sfEvtKeyPressed) {
        if (event->key.code == sfKeyEscape)
            sfRenderWindow_close(window);
    }
}
