/*
** EPITECH PROJECT, 2022
** S1
** File description:
** init_fc
*/

#include "../../include/main.h"
#include "../../include/ui.h"

sfRenderWindow *init_window(void)
{
    sfVideoMode mode = {WINDOW_WIDTH, WINDOW_HEIGHT, 32};
    sfRenderWindow *window = sfRenderWindow_create(mode,
    "My RPG", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 120);
    return window;
}

sfView *init_view(void)
{
    sfView *view = sfView_create();
    sfView_setCenter(view, (sfVector2f) {WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2});
    sfView_setSize(view, (sfVector2f) {WINDOW_WIDTH, WINDOW_HEIGHT});
    return view;
}
