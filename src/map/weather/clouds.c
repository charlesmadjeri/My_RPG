/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** clouds
*/

#include "../../../include/main.h"
#include "../../../include/map.h"

void generate_cloud_texture(weather *weather)
{
    weather->cloud_texture = sfTexture_createFromFile(CLOUDS_PATH, NULL);
    weather->cloud_sprite = sfSprite_create();
    sfSprite_setTexture(weather->cloud_sprite, weather->cloud_texture, sfTrue);
    sfSprite_setPosition(weather->cloud_sprite, (sfVector2f) {0, 0});
    sfColor color = sfSprite_getColor(weather->cloud_sprite);
    color.a = 255;
    sfSprite_setColor(weather->cloud_sprite, color);
    weather->clouds_render_tex =
    sfRenderTexture_create(MAP_WIDTH_PX * 2, MAP_HEIGHT_PX, sfFalse);
    for (int i = 0, j = 0, nb = 0; nb < NB_CLOUDS; nb++) {
        i = (rand() % ((MAP_WIDTH_PX * 2) - CLOUDS_WIDTH));
        j = (rand() % (MAP_HEIGHT_PX - CLOUDS_WIDTH));
        sfSprite_setPosition(weather->cloud_sprite, (sfVector2f){i, j});
        sfRenderTexture_drawSprite(weather->clouds_render_tex,
        weather->cloud_sprite, NULL);
    }
}

void create_cloud_sprite(weather *weather)
{
    generate_cloud_texture(weather);
    weather->clouds_sprite = sfSprite_create();
    sfSprite_setPosition(weather->clouds_sprite, (sfVector2f) {0, 0});
    weather->clouds_texture =
    sfRenderTexture_getTexture(weather->clouds_render_tex);
    sfSprite_setTexture(weather->clouds_sprite,
    weather->clouds_texture, sfTrue);
}
