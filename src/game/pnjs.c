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
    pnjs->stat = 'L';
    pnjs->stat_num = 1;
    sfTexture *pnj_texture = sfTexture_createFromFile(VILLAGER_SPRITE_PATH,
    NULL);
    sfSprite_setTexture(pnjs->sprite, pnj_texture, sfTrue);
    sfSprite_setPosition(pnjs->sprite, pnjs->pos);
    sfSprite_setTextureRect(pnjs->sprite, pnjs->area);
    return pnjs;
}

sfIntRect dir_player(pnjs* pnjs, sfIntRect rect)
{
    srand(time(0));
    int num = rand() % 100 + 1;
    if (num < 6) {
        num = rand() % 3 + 2;
    }
    num == 2 ? pnjs->stat_num += 1 : 0;
    num == 3 ? pnjs->stat_num -= 1 : 0;
    pnjs->stat_num > 4 ? pnjs->stat_num = 1 : 0;
    pnjs->stat_num < 1 ? pnjs->stat_num = 4 : 0;
    pnjs->stat_num == 1 ? rect.top = 616, pnjs->pos.y -= 5 : 0;
    pnjs->stat_num == 2 ? rect.top = 847, pnjs->pos.x += 5 : 0;
    pnjs->stat_num == 3 ? rect.top = 770, pnjs->pos.y += 5 : 0;
    pnjs->stat_num == 4 ? rect.top = 693, pnjs->pos.x -= 5 : 0;
    return rect;
}

void pnj_move(game *game)
{
    sfTime time = sfClock_getElapsedTime(game->clocks->pnj);
    float sec = sfTime_asSeconds(time);
    if (sec > 0.2) {
        sfIntRect rect = sfSprite_getTextureRect(game->pnjs->sprite);
        rect = dir_player(game->pnjs, rect);
        rect.left += 77;
        rect.left > 616 ? rect.left = 0 : 0;
        game->pnjs->area = rect;
        sfSprite_setPosition(game->pnjs->sprite, game->pnjs->pos);
        sfSprite_setTextureRect(game->pnjs->sprite, game->pnjs->area);
        sfClock_restart(game->clocks->pnj);
    }
}

void display_pnjs(sfRenderWindow *window, game* game)
{
    pnj_move(game);
    sfRenderWindow_drawSprite(window, game->pnjs->sprite, NULL);
}

void destroy_pnjs(pnjs *pnjs);
