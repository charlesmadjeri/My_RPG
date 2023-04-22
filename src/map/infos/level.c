/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** level
*/

#include "../../../include/main.h"
#include "../../../include/map.h"

static sfSprite *create_level_sprite(char *path)
{
    sfTexture *texture = sfTexture_createFromFile(path, NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);

    sfVector2f scale = {4, 4};
    sfSprite_setScale(sprite, scale);

    return sprite;
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

void display_level(sfRenderWindow *window, player *player, level_nb *level_nb)
{
    switch (player->level) {
        case 1: sfSprite_setPosition(level_nb->level_1_sprite,
            (sfVector2f) {level_nb->level_nb_pos.x, level_nb->level_nb_pos.y});
            sfRenderWindow_drawSprite(window, level_nb->level_1_sprite, NULL);
            break;
        case 2: sfSprite_setPosition(level_nb->level_2_sprite,
            (sfVector2f) {level_nb->level_nb_pos.x, level_nb->level_nb_pos.y});
            sfRenderWindow_drawSprite(window, level_nb->level_2_sprite, NULL);
            break;
        case 3: sfSprite_setPosition(level_nb->level_3_sprite,
            (sfVector2f) {level_nb->level_nb_pos.x, level_nb->level_nb_pos.y});
            sfRenderWindow_drawSprite(window, level_nb->level_3_sprite, NULL);
            break;
    }
}
