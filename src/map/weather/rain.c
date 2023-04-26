/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** rain
*/

#include "../../../include/main.h"
#include "../../../include/map.h"

void generate_rain_texture(weather *weather)
{
    weather->raindrop_texture = sfTexture_createFromFile(RAINDROP_PATH, NULL);
    weather->raindrop_sprite = sfSprite_create();
    sfSprite_setTexture(weather->raindrop_sprite,
    weather->raindrop_texture, sfTrue);
    sfSprite_setPosition(weather->raindrop_sprite, (sfVector2f) {0, 0});
    sfColor color = sfSprite_getColor(weather->raindrop_sprite);
    color.a = 128;
    sfSprite_setColor(weather->raindrop_sprite, color);
    sfVector2f sprite_size = {(float)sfTexture_getSize(weather->raindrop_texture).x,
    (float)sfTexture_getSize(weather->raindrop_texture).y};
    weather->rain_render_tex =
    sfRenderTexture_create(MAP_WIDTH_PX, MAP_HEIGHT_PX * 4, sfFalse);
    for (int i = 0; i < MAP_WIDTH_PX; i += sprite_size.x) {
        for (int j = 0; j < MAP_HEIGHT_PX * 4; j += sprite_size.y) {
            sfSprite_setPosition(weather->raindrop_sprite, (sfVector2f){i, j});
            sfRenderTexture_drawSprite(weather->rain_render_tex,
            weather->raindrop_sprite, NULL);
        }
    }
}

void create_rain_sprite(weather *weather)
{
    generate_rain_texture(weather);
    weather->rain_sprite = sfSprite_create();
    sfSprite_setPosition(weather->rain_sprite, (sfVector2f) { 0, -3 * MAP_HEIGHT_PX});
    weather->rain_texture =
    sfRenderTexture_getTexture(weather->rain_render_tex);
    sfSprite_setTexture(weather->rain_sprite, weather->rain_texture, sfTrue);
}
