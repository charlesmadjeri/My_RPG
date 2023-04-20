/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** init_map
*/

#include "../../include/main.h"
#include "../../include/map.h"
#include "../../include/enemy.h"
#include "../../include/pnjs.h"
#include "../../include/player.h"

static weather *init_weather(void)
{
    weather *weather = malloc(sizeof(*weather));
    weather->cloud_sprite = create_cloud_sprite();
    weather->cloud_pos = (sfVector2f) {0, 0};
    weather->rain_pos = (sfVector2f) {0, 0};
    weather->rain_sprite = create_rain_sprite();

    return weather;
}

static map_data *init_map_data(void)
{
    map_data *map_data = malloc(sizeof(*map_data));

    load_matrice(map_data);
    make_map_texture(map_data);

    return map_data;
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
    map->weather = init_weather();

    return map;
}
