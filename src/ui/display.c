/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** display
*/

#include "../../include/main.h"
#include "../../include/game.h"

void display_map(sfRenderWindow *window, map *map)
{
    sfRenderWindow_drawSprite(window, map->map_sprite, NULL);
    return;
}

void display(sfRenderWindow *window, game *game)
{
    display_splash_screen(window, game->splash);
    display_map(window, game->map);
    display_player(window, game->player);
    return;
}
