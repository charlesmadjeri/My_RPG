/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** life
*/

#include "../../../include/map.h"
#include "../../../include/main.h"
#include <SFML/Graphics/Texture.h>

sfSprite *create_life_bar_sprite(char *path)
{
    sfTexture *texture = sfTexture_createFromFile(path, NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfTexture_destroy(texture);
    sfVector2f scale = {3, 3};
    sfSprite_setScale(sprite, scale);

    return sprite;
}

life_bar *init_life_bar(void)
{
    life_bar *life_bar = malloc(sizeof(*life_bar));

    life_bar->life_bar_sprite0 = create_life_bar_sprite(LIFE_BAR_0_PATH);
    life_bar->life_bar_sprite1 = create_life_bar_sprite(LIFE_BAR_1_PATH);
    life_bar->life_bar_sprite2 = create_life_bar_sprite(LIFE_BAR_2_PATH);
    life_bar->life_bar_sprite3 = create_life_bar_sprite(LIFE_BAR_3_PATH);
    life_bar->life_bar_sprite4 = create_life_bar_sprite(LIFE_BAR_4_PATH);
    life_bar->life_bar_sprite5 = create_life_bar_sprite(LIFE_BAR_5_PATH);
    life_bar->life_bar_sprite6 = create_life_bar_sprite(LIFE_BAR_6_PATH);
    life_bar->life_bar_pos = (sfVector2f){0, 0};

    return life_bar;
}
