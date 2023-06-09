/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** init_map
*/

#include "../../include/main.h"
#include "../../include/map.h"
#include "../../include/pnjs.h"
#include "../../include/player.h"

static weather *init_weather(void)
{
    weather *weather = malloc(sizeof(*weather));

    create_cloud_sprite(weather);
    create_rain_sprite(weather);
    weather->clouds_pos = (sfVector2f) {0, 0};
    weather->rain_pos = (sfVector2f) {0, 0};
    weather->is_raining = sfFalse;

    return weather;
}

static map_data *init_map_data(void)
{
    map_data *map_data = malloc(sizeof(*map_data));

    load_matrice(map_data);
    make_map_texture(map_data);

    return map_data;
}

static infos *init_infos(void)
{
    infos *infos = malloc(sizeof(*infos));

    init_level_nb(infos);
    init_spell_bar(infos);
    init_life_bar(infos);
    init_xp_bar(infos);

    return infos;
}

map *init_map(void)
{
    map *map = malloc(sizeof(*map));
    map->map_data = init_map_data();
    map->map_sprite = create_sprite_from_rend_tex
    (map->map_data->map_render_tex);
    map->num_enemies = 0;
    map->pnjs = init_pnjs();
    map->num_pnjs = 0;
    map->weather = init_weather();
    map->infos = init_infos();
    map->disp_help = sfTrue;
    map->help_sprite = sfSprite_create();
    map->help_texture = sfTexture_createFromFile(HELP_PATH, NULL);
    sfSprite_setTexture(map->help_sprite, map->help_texture, sfTrue);

    return map;
}
