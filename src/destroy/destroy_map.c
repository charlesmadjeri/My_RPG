/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** destroy_map
*/

#include "../../include/main.h"
#include "../../include/destroy.h"
#include "../../include/map.h"

void destroy_pnjs(pnjs *pnjs)
{
    sfSprite_destroy(pnjs->sprite);
    free(pnjs);
}

void destroy_weather(weather *weather)
{
    sfSprite_destroy(weather->cloud_sprite);
    sfSprite_destroy(weather->rain_sprite);
    free (weather);
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
}

void destroy_map_data(map_data *map_data)
{
    for (int i = 0; i < MAP_HEIGHT; i++)
        free(map_data->matrice[i]);
    free(map_data->matrice);
    sfRenderTexture_destroy(map_data->map_render_tex);
    destroy_textures(map_data->textures);
    free(map_data);
}

void destroy_map(map *map)
{
    sfSprite_destroy(map->map_sprite);
    sfSprite_destroy(map->help_sprite);
    sfTexture_destroy(map->help_texture);
    destroy_map_data(map->map_data);
    destroy_weather(map->weather);
    destroy_info(map->infos);
    destroy_pnjs(map->pnjs);

    free(map);
}
