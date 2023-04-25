/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** rain
*/

#include "../../../include/main.h"
#include "../../../include/map.h"
#include <SFML/Graphics/RenderTexture.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Types.h>

sfRenderTexture *generate_rain_texture(void)
{
    sfTexture *rain_texture = sfTexture_createFromFile(RAINDROP_PATH, NULL);
    sfSprite *raindrop_sprite = sfSprite_create();
    sfSprite_setTexture(raindrop_sprite, rain_texture, sfTrue);
    sfSprite_setPosition(raindrop_sprite, (sfVector2f) {0, 0});
    sfColor color = sfSprite_getColor(raindrop_sprite);
    color.a = 128;
    sfSprite_setColor(raindrop_sprite, color);
    sfVector2f sprite_size = {(float)sfTexture_getSize(rain_texture).x,
    (float)sfTexture_getSize(rain_texture).y};
    sfRenderTexture *render_texture =
    sfRenderTexture_create(MAP_WIDTH_PX, MAP_HEIGHT_PX * 4, sfFalse);
    for (int i = 0; i < MAP_WIDTH_PX; i += sprite_size.x) {
        for (int j = 0; j < MAP_HEIGHT_PX * 4; j += sprite_size.y) {
            sfSprite_setPosition(raindrop_sprite, (sfVector2f){i, j});
            sfRenderTexture_drawSprite(render_texture, raindrop_sprite, NULL);
        }
    }
    // sfSprite_destroy(raindrop_sprite);
    // sfTexture_destroy(rain_texture);
    return render_texture;
}

sfSprite *create_rain_sprite(void)
{
    sfRenderTexture *render_texture = generate_rain_texture();
    sfSprite *rain_sprite = sfSprite_create();
    sfSprite_setPosition(rain_sprite, (sfVector2f) { 0, -3 * MAP_HEIGHT_PX});
    const sfTexture *rain_full_texture =
    sfRenderTexture_getTexture(render_texture);
    sfSprite_setTexture(rain_sprite, rain_full_texture, sfTrue);
    // sfRenderTexture_destroy(render_texture);

    return rain_sprite;
}
