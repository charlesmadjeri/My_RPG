/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** map
*/

#include "../../include/main.h"

map *init_map(void)
{
    map *map = malloc(sizeof(*map));

    map->name = "first_map";
    map->enemies = init_enemy();
    map->num_enemies = 0;
    map->height = MAP_HEIGHT;
    map->width = MAP_WIDTH;
    map->pnjs = init_pnjs();
    map->num_pnjs = 0;

    return map;
}

void load_map(map *map, const char *filename);
void unload_map(map *map);
void render_map(map *map);
