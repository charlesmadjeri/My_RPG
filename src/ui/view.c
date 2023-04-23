/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** view
*/

#include "../../include/main.h"
#include "../../include/ui.h"
#include "../../include/map.h"
#include <SFML/System/Vector2.h>

void refresh_view(sfRenderWindow *window, game *game)
{
    sfVector2f pos = sfSprite_getPosition(game->player->sprite);
    sfVector2u size = sfRenderWindow_getSize(window);
    sfView_setSize(game->view, (sfVector2f) {size.x, size.y});
    sfView_setCenter(game->view, pos);
    sfRenderWindow_setView(window, game->view);
}

void move_view(game *game, sfEvent *event, sfRenderWindow *window)
{
    sfVector2f pos = sfSprite_getPosition(game->player->sprite);
    if ((event->key.code == sfKeyQ) &&
    ((pos.x - 10) > (int)(WINDOW_WIDTH / 2)))
        pos.x -= 10;
    if ((event->key.code == sfKeyD) &&
    ((pos.x + 10) < (MAP_WIDTH_PX - (int)(WINDOW_WIDTH / 2))))
        pos.x += 10;
    if ((event->key.code == sfKeyZ) &&
    ((pos.y - 10) > (int)(WINDOW_HEIGHT / 2)))
        pos.y -= 10;
    if ((event->key.code == sfKeyS) &&
    ((pos.y + 10) < (MAP_HEIGHT_PX - (int)(WINDOW_HEIGHT / 2))))
        pos.y += 10;
    game->player->pos = pos;
    sfSprite_setPosition(game->player->sprite, pos);
    sfView_setCenter(game->view, pos);
    sfRenderWindow_setView(window, game->view);
}
