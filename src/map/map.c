/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** map
*/

#include "../../include/main.h"
#include "../../include/map.h"
#include "../../include/enemy.h"
#include "../../include/pnjs.h"
#include "../../include/player.h"

void load_matrice(map_data *map_data)
{
    int i, j;
    map_data->matrice = malloc(sizeof(int *) * MAP_HEIGHT);
    for (int i = 0; i < MAP_HEIGHT; i++)
        map_data->matrice[i] = malloc(sizeof(int) * MAP_WIDTH);
            for (i = 0; i < MAP_HEIGHT; i++) {

    101 101 101 101 101 101 101 101 101 101 101 101 0 0 0 0 0 0 0 0 0 0 104 0 104 0 0 104 0 0 104 0 104 104 104 104
    101 101 101 101 101 101 101 101 101 101 101 101 0 0 104 104 0 0 0 0 0 0 0 0 0 0 104 0 0 104 0 0 0 0 0 104
    101 101 101 101 101 101 101 101 101 101 101 101 0 104 0 0 0 0 0 104 0 0 0 0 104 0 104 0 0 0 0 0 0 0 104 104
    0 0 0 0 0 0 101 101 101 101 101 101 0 0 0 0 0 104 0 0 0 0 104 104 0 0 0 0 1 1 9 0 0 0 0 3
    0 0 0 0 0 0 101 101 101 101 101 101 101 0 0 0 0 0 0 0 0 104 0 0 0 0 1 1 1 0 0 104 104 104 3 102
    0 0 0 0 0 0 0 101 101 101 101 101 101 101 101 0 0 0 0 0 0 0 1 1 1 1 1 0 104 104 104 0 0 3 102 102
    0 0 0 0 0 0 0 0 101 101 101 101 101 101 101 0 104 0 0 0 0 0 1 0 0 0 104 104 0 0 0 0 104 3 102 102
    0 0 0 2 2 2 0 0 0 0 101 101 101 101 0 0 0 0 104 0 0 0 1 104 0 104 0 0 0 0 0 0 0 3 3 102
    0 0 2 2 103 103 103 103 2 2 0 0 0 102 102 102 0 0 0 0 104 0 1 104 104 104 0 0 104 0 0 3 3 3 102 102
    2 2 2 103 2 2 2 2 103 2 2 2 0 0 0 102 102 102 0 0 0 0 1 1 1 1 0 0 0 0 3 3 3 102 102 102
    2 2 103 2 2 2 2 2 2 103 2 2 2 0 0 0 0 102 102 0 0 0 0 0 0 0 1 0 0 0 3 3 102 102 102 102
    2 2 103 2 2 2 2 2 2 103 2 2 2 0 0 0 0 102 102 102 102 0 0 0 0 0 1 1 0 104 0 3 3 102 102 102
    2 2 103 2 2 2 2 2 2 103 2 2 0 0 110 110 110 110 110 110 102 102 0 0 0 0 1 1 0 0 0 0 3 3 102 102
    2 2 2 2 2 2 2 2 2 2 2 2 110 110 111 111 111 2 2 111 110 102 102 102 0 0 2 2 0 0 0 0 0 3 3 102
    0 0 2 2 2 2 2 2 2 2 0 0 110 111 2 2 2 2 2 2 111 110 102 102 102 102 2 2 0 0 0 0 3 3 3 102
    0 0 0 0 0 2 2 0 0 0 0 0 110 111 2 2 2 2 2 2 2 2 110 102 102 102 2 2 102 0 0 3 3 3 102 102
    0 0 0 0 0 1 1 1 1 1 110 110 2 2 2 2 2 2 2 2 2 2 110 110 110 0 1 1 102 102 3 3 102 102 102 102
    3 0 0 0 0 1 1 1 1 1 1 2 2 2 2 2 2 2 2 2 2 2 2 2 2 1 1 1 102 102 102 3 102 102 102 102
    3 3 0 0 0 0 0 0 0 3 3 110 2 2 2 2 2 2 2 2 2 2 2 2 2 1 1 1 3 3 102 102 102 102 102 102
    3 3 3 0 3 3 3 3 0 3 3 3 110 2 2 2 2 2 2 2 2 2 110 110 110 3 3 3 3 3 3 102 102 102 102 102
    102 102 102 102 102 102 102 102 102 102 102 102 102 110 110 110 110 110 110 110 110 110 3 3 3 3 3 3 3 3 102 102 102 102 102 102
}

sfSprite *create_sprite_from_rend_tex(sfRenderTexture *map_render_tex)
{
    sfSprite *map_sprite = sfSprite_create();
    const sfTexture *map_texture = sfRenderTexture_getTexture(map_render_tex);

    sfSprite_setTexture(map_sprite, map_texture, sfTrue);
    sfSprite_setPosition(map_sprite, (sfVector2f) {0, 0});

    return map_sprite;
}

void display_map(sfRenderWindow *window, game *game)
{
    sfRenderWindow_drawSprite(window, game->map->map_sprite, NULL);
    display_player(window, game->player);
    display_weather(window, game);
    display_infos(window, game);
}
