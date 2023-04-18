/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** view
*/

#include "../../include/main.h"
#include "../../include/ui.h"

void refresh_view(sfRenderWindow *window, game *game)
{
    sfVector2f pos = sfSprite_getPosition(game->player->sprite);
    sfVector2u size = sfRenderWindow_getSize(window);

    sfView_setCenter(game->view, pos);
    sfView_setSize(game->view, (sfVector2f) {size.x, size.y});
    sfRenderWindow_setView(window, game->view);
}

void move_view(sfView *view, sfEvent *event)
{
    sfVector2f pos = sfView_getCenter(view);

    if (event->key.code == sfKeyQ)
        pos.x -= 10;
    if (event->key.code == sfKeyD)
        pos.x += 10;
    if (event->key.code == sfKeyS)
        pos.y -= 10;
    if (event->key.code == sfKeyZ)
        pos.y += 10;
    sfView_setCenter(view, pos);
}
