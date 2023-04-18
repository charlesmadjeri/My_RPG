/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** display
*/

#include "../../include/main.h"
#include "../../include/game.h"
#include "../../include/splash_screen.h"
#include "../../include/player.h"
#include <SFML/System/Vector2.h>

void refresh_view(sfRenderWindow *window, game *game)
{
    sfVector2f pos = sfSprite_getPosition(game->player->sprite);
    sfVector2u size = sfRenderWindow_getSize(window);

    sfView_setCenter(game->view, pos);
    sfView_setSize(game->view, (sfVector2f) {size.x, size.y});
    sfRenderWindow_setView(window, game->view);
}

void display_map(sfRenderWindow *window, map *map)
{
    sfRenderWindow_drawSprite(window, map->map_sprite, NULL);
    return;
}

void display(sfRenderWindow *window, game *game)
{
    //display_splash_screen(window, game->splash);
    display_map(window, game->map);
    display_player(window, game->player);
    refresh_view(window, game);
    return;
}
