/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** level
*/

#include "../../../include/main.h"
#include "../../../include/map.h"
#include "../../../include/events.h"
#include "../../../include/data.h"

static sfSprite *create_level_sprite(char *path)
{
    sfTexture *texture = sfTexture_createFromFile(path, NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);

    sfVector2f scale = {4, 4};
    sfSprite_setScale(sprite, scale);

    return sprite;
}

void init_level_nb(infos *infos)
{
    infos->level_nb = malloc(sizeof(*infos->level_nb));

    infos->level_nb->level_1_sprite = create_level_sprite(LEVEL_1_PATH);
    infos->level_nb->level_2_sprite = create_level_sprite(LEVEL_2_PATH);
    infos->level_nb->level_3_sprite = create_level_sprite(LEVEL_3_PATH);
    infos->level_nb->level_nb_pos = (sfVector2f){0, 0};
}

void display_level(sfRenderWindow *window, player *player, level_nb *level_nb)
{
    switch (player->level) {
        case 1:
            sfSprite_setPosition(level_nb->level_1_sprite,
            level_nb->level_nb_pos);
            sfRenderWindow_drawSprite(window, level_nb->level_1_sprite, NULL);
            break;
        case 2:
            sfSprite_setPosition(level_nb->level_2_sprite,
            level_nb->level_nb_pos);
            sfRenderWindow_drawSprite(window, level_nb->level_2_sprite, NULL);
            break;
        case 3:
            sfSprite_setPosition(level_nb->level_3_sprite,
            level_nb->level_nb_pos);
            sfRenderWindow_drawSprite(window, level_nb->level_3_sprite, NULL);
            break;
    }
    level_up(player);
}
