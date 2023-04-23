/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** fog
*/

#include "../../../include/main.h"
#include "../../../include/map.h"
#include "../../../include/ui.h"
#include <SFML/Graphics/Sprite.h>

void reduce_sprite_transparency(map *map)
{
    sfColor color = sfSprite_getColor(map->U_fog_sprite);
    color.a -= 50;  // Reduce alpha by specified amount
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
    map->u_fog_texture = sfTexture_createFromFile(U_FOG_PATH, NULL);
    map->d_fog_texture = sfTexture_createFromFile(D_FOG_PATH, NULL);
    map->l_fog_texture = sfTexture_createFromFile(L_FOG_PATH, NULL);
    map->r_fog_texture = sfTexture_createFromFile(R_FOG_PATH, NULL);
}

void set_textures_and_scale(map *map)
{
    sfSprite_setTexture(map->U_fog_sprite, map->u_fog_texture, sfTrue);
    sfSprite_setTexture(map->D_fog_sprite, map->d_fog_texture, sfTrue);
    sfSprite_setTexture(map->L_fog_sprite, map->l_fog_texture, sfTrue);
    sfSprite_setTexture(map->R_fog_sprite, map->r_fog_texture, sfTrue);
    sfSprite_setScale(map->U_fog_sprite, (sfVector2f) {6, 2});
    sfSprite_setScale(map->D_fog_sprite, (sfVector2f) {6, 2});
    sfSprite_setScale(map->L_fog_sprite, (sfVector2f) {3, 4});
    sfSprite_setScale(map->R_fog_sprite, (sfVector2f) {3, 4});
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