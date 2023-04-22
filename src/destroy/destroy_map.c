/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** destroy_map
*/

#include "../../include/main.h"
#include "../../include/destroy.h"
#include "../../include/map.h"

void destroy_pnjs(pnjs *pnjs, int num_pnjs)
{
    for (int i = 0; i < num_pnjs; i++) {
        free(pnjs[i].name);
        for (int j = 0; pnjs[i].dialog[j]; j++)
            free(pnjs[i].dialog[j]);
        free(pnjs[i].dialog);
    }
    free(pnjs);
}

void destroy_map_data(map_data *map_data)
{
    for (int i = 0; i < MAP_HEIGHT; i++)
        free(map_data->matrice[i]);
    free(map_data->matrice);
    sfRenderTexture_destroy(map_data->map_render_tex);
    free(map_data);
}

void destroy_map(map *map)
{
    sfSprite_destroy(map->map_sprite);
    destroy_map_data(map->map_data);
    destroy_pnjs(map->pnjs, map->num_pnjs);
    free(map);
}
