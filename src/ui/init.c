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
    "My Paint", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    return window;
}
