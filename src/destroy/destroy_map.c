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

void destroy_enemy(enemy *enemy)
{
    free(enemy->name);
    free(enemy);
}

void destroy_textures(textures *textures)
{
    sfTexture_destroy(textures->grass);
    sfTexture_destroy(textures->pass);
    sfTexture_destroy(textures->road);
    sfTexture_destroy(textures->sand);
    sfTexture_destroy(textures->dungeon_door);
    sfTexture_destroy(textures->mountains);
    sfTexture_destroy(textures->water);
    sfTexture_destroy(textures->steps);
    sfTexture_destroy(textures->dead_trees);
    sfTexture_destroy(textures->city_wall);
    sfTexture_destroy(textures->house);
    free(textures);
}

void destroy_map_data(map_data *map_data)
{
    for (int i = 0; i < MAP_HEIGHT; i++)
        free(map_data->matrice[i]);
    free(map_data->matrice);
    sfRenderTexture_destroy(map_data->map_render_tex);
    sfTexture_destroy(map_data->map_final_tex);
    destroy_textures(map_data->textures);
    free(map_data);
}

void destroy_map(map *map)
{
    sfSprite_destroy(map->map_sprite);
    destroy_map_data(map->map_data);
    for (int i = 0; i < map->num_enemies; i++)
        destroy_enemy(&map->enemies[i]);
    free(map->enemies);
    destroy_pnjs(map->pnjs, map->num_pnjs);
    free(map);
}
