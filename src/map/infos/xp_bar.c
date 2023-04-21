/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** xp
*/

#include "../../../include/map.h"
#include "../../../include/main.h"

sfSprite *create_xp_bar_sprite(char *path)
{
    sfTexture *texture = sfTexture_createFromFile(path, NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);

    return (sprite);
}

sfSprite *create_level_sprite(char *path)
{
    sfTexture *texture = sfTexture_createFromFile(path, NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);

    return (sprite);
}

level_nb *init_level_nb(void)
{
    level_nb *level_nb = malloc(sizeof(*level_nb));

    level_nb->level_1_sprite = create_level_sprite(LEVEL_1_PATH);
    level_nb->level_2_sprite = create_level_sprite(LEVEL_2_PATH);
    level_nb->level_3_sprite = create_level_sprite(LEVEL_3_PATH);
    level_nb->level_nb_pos = (sfVector2f){0, 0};

    return level_nb;
}

xp_bar *init_xp_bar(void)
{
    xp_bar *xp_bar = malloc(sizeof(*xp_bar));

    xp_bar->xp_bar_sprite0 = create_xp_bar_sprite(XP_BAR_0_PATH);
    xp_bar->xp_bar_sprite1 = create_xp_bar_sprite(XP_BAR_1_PATH);
    xp_bar->xp_bar_sprite2 = create_xp_bar_sprite(XP_BAR_2_PATH);
    xp_bar->xp_bar_sprite3 = create_xp_bar_sprite(XP_BAR_3_PATH);

    return xp_bar;
}
