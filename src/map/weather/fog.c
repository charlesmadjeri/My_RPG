/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** fog
*/

#include "../../../include/main.h"
#include "../../../include/map.h"
#include "../../../include/ui.h"

void reduce_sprite_transparency(map *map)
{
    sfColor color = sfSprite_getColor(map->U_fog_sprite);
    color.a -= 0;
    sfSprite_setColor(map->U_fog_sprite, color);
    sfSprite_setColor(map->D_fog_sprite, color);
    sfSprite_setColor(map->L_fog_sprite, color);
    sfSprite_setColor(map->R_fog_sprite, color);
}

void create_sprites_and_textures(map *map)
{
    map->U_fog_sprite = sfSprite_create();
    map->D_fog_sprite = sfSprite_create();
    map->L_fog_sprite = sfSprite_create();
    map->R_fog_sprite = sfSprite_create();
    map->fog_texture = sfTexture_createFromFile(FOG_PATH, NULL);
    sfSprite_setTexture(map->U_fog_sprite, map->fog_texture, sfTrue);
    sfSprite_setTexture(map->D_fog_sprite, map->fog_texture, sfTrue);
    sfSprite_setTexture(map->L_fog_sprite, map->fog_texture, sfTrue);
    sfSprite_setTexture(map->R_fog_sprite, map->fog_texture, sfTrue);
}

void set_textures_and_scale(map *map)
{
    sfSprite_setScale(map->U_fog_sprite, (sfVector2f) {1, 1});
    sfSprite_setScale(map->D_fog_sprite, (sfVector2f) {1, 1});
    sfSprite_setScale(map->L_fog_sprite, (sfVector2f) {1, 1});
    sfSprite_setScale(map->R_fog_sprite, (sfVector2f) {1, 1});
}

void set_positions(map *map)
{
    sfSprite_setPosition(map->U_fog_sprite,
    (sfVector2f) {- (int)(WINDOW_WIDTH / 2), - (int)(WINDOW_HEIGHT / 2)});
    sfSprite_setPosition(map->D_fog_sprite,
    (sfVector2f) {- (int)(WINDOW_WIDTH / 2),
    MAP_HEIGHT_PX - (int)(WINDOW_WIDTH / 2)});
    sfSprite_setPosition(map->L_fog_sprite,
    (sfVector2f) {- (int)(WINDOW_WIDTH / 2), - (int)(WINDOW_HEIGHT / 2)});
    sfSprite_setPosition(map->R_fog_sprite,
    (sfVector2f) {MAP_WIDTH_PX - (int)(WINDOW_WIDTH / 2),
    - (int)(WINDOW_HEIGHT / 2)});
}

void init_fog(map *map)
{
    create_sprites_and_textures(map);
    set_textures_and_scale(map);
    set_positions(map);

}
