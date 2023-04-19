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

static void load_matrice(map_data *map_data)
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

static map_data *init_map_data(void)
{
    map_data *map_data = malloc(sizeof(*map_data));

    load_matrice(map_data);
    make_map_texture(map_data);

    return map_data;
}

static sfSprite *create_sprite_from_rend_tex(sfRenderTexture *map_render_tex)
{
    sfSprite *map_sprite = sfSprite_create();
    const sfTexture *map_texture = sfRenderTexture_getTexture(map_render_tex);

    sfSprite_setTexture(map_sprite, map_texture, sfTrue);
    sfSprite_setPosition(map_sprite, (sfVector2f) {0, 0});

    return map_sprite;
}

map *init_map(void)
{
    map *map = malloc(sizeof(*map));
    map->map_data = init_map_data();
    map->map_sprite = create_sprite_from_rend_tex
    (map->map_data->map_render_tex);
    map->enemies = init_enemy();
    map->num_enemies = 0;
    map->pnjs = init_pnjs();
    map->num_pnjs = 0;

    return map;
}
