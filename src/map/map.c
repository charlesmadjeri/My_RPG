/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** map
*/

#include "../../include/main.h"
#include "../../include/map.h"
#include "../../include/events.h"
#include "../../include/enemy.h"
#include "../../include/pnjs.h"
#include "../../include/player.h"
#include "../../include/athena.h"

void load_matrice(map_data *map_data)
{
    FILE* fp;
    int i, j;
    map_data->matrice = malloc(sizeof(int *) * MAP_HEIGHT);
    for (int i = 0; i < MAP_HEIGHT; i++)
        map_data->matrice[i] = malloc(sizeof(int) * MAP_WIDTH);

    fp = fopen(MATRICE_PATH, "r");
    for (i = 0; i < MAP_HEIGHT; i++) {
        for (j = 0; j < MAP_WIDTH; j++)
            fscanf(fp, "%i,", &map_data->matrice[i][j]);
        fgetc(fp);
    }

    fclose(fp);
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
    display_athena(window, game);
    display_pnjs(window, game);
    display_weather(window, game);
    display_infos(window, game);
    is_interaction(game);
}
