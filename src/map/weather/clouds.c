/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** clouds
*/

#include "../../../include/main.h"
#include "../../../include/map.h"

sfRenderTexture *generate_cloud_texture(void)
{
    sfTexture *cloud_texture = sfTexture_createFromFile(CLOUDS_PATH, NULL);
    sfSprite *cloud_sprite = sfSprite_create();
    sfSprite_setTexture(cloud_sprite, cloud_texture, sfTrue);
    sfSprite_setPosition(cloud_sprite, (sfVector2f) {0, 0});
    sfColor color = sfSprite_getColor(cloud_sprite);
    color.a = 255;
    sfSprite_setColor(cloud_sprite, color);
    sfRenderTexture *render_texture =
    sfRenderTexture_create(MAP_WIDTH_PX * 2, MAP_HEIGHT_PX, sfFalse);
    for (int i = 0, j = 0, nb = 0; nb < NB_CLOUDS; nb++) {
        i = (rand() % ((MAP_WIDTH_PX * 2) - CLOUDS_WIDTH));
        j = (rand() % (MAP_HEIGHT_PX - CLOUDS_WIDTH));
        sfSprite_setPosition(cloud_sprite, (sfVector2f){i, j});
        sfRenderTexture_drawSprite(render_texture, cloud_sprite, NULL);
    }
    return render_texture;
}

sfSprite *create_cloud_sprite(void)
{
    sfRenderTexture *render_texture = generate_cloud_texture();
    sfSprite *cloud_sprite = sfSprite_create();
    sfSprite_setPosition(cloud_sprite, (sfVector2f) {0, 0});
    const sfTexture *cloud_full_texture =
    sfRenderTexture_getTexture(render_texture);
    sfSprite_setTexture(cloud_sprite, cloud_full_texture, sfTrue);

    return cloud_sprite;
}
