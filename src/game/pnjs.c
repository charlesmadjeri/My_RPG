/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-maxence.guy
** File description:
** pnjs
*/

#include "../../include/main.h"
#include "../../include/pnjs.h"
#include "../../include/data.h"

pnjs *init_pnjs(void)
{
    pnjs *pnjs = malloc(sizeof(*pnjs));
    sfIntRect rect = {0, 770, 77, 77};
    pnjs->pos = (sfVector2f) {2420, 1680};
    pnjs->sprite = sfSprite_create();
    pnjs->area = rect;
    sfTexture *pnj_texture = sfTexture_createFromFile(VILLAGER_SPRITE_PATH,
    NULL);
    sfSprite_setTexture(pnjs->sprite, pnj_texture, sfTrue);
    sfSprite_setPosition(pnjs->sprite, pnjs->pos);
    sfSprite_setTextureRect(pnjs->sprite, pnjs->area);
    return pnjs;
}

// void check_pnj(game* game)
// {
//     sfVector2f pos_p = sfSprite_getPosition(game->player->sprite);
//     sfVector2f pos_v = sfSprite_getPosition(game->pnjs->sprite);
// }

void display_pnjs(sfRenderWindow *window, pnjs *pnjs)
{
    sfRenderWindow_drawSprite(window, pnjs->sprite, NULL);
}

void destroy_pnjs(pnjs *pnjs);
