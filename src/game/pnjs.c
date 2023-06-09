/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-maxence.guy
** File description:
** pnjs
*/

#include "../../include/main.h"
#include "../../include/pnjs.h"
#include "../../include/data.h"
#include "../../include/player.h"
#include "../../include/events.h"
#include <SFML/Graphics/Texture.h>

pnjs *init_pnjs(void)
{
    pnjs *pnjs = malloc(sizeof(*pnjs));
    sfIntRect rect = {0, 770, 77, 77};
    pnjs->pos = (sfVector2f) {2620, 2580};
    pnjs->sprite = sfSprite_create();
    pnjs->area = rect;
    pnjs->stat = 'L';
    pnjs->stat_num = 1;
    pnjs->texture = sfTexture_createFromFile(VILLAGER_SPRITE_PATH,
    NULL);
    sfSprite_setTexture(pnjs->sprite, pnjs->texture, sfTrue);
    sfSprite_setPosition(pnjs->sprite, pnjs->pos);
    sfSprite_setTextureRect(pnjs->sprite, pnjs->area);
    return pnjs;
}

sfIntRect dir_player(game* game, pnjs* pnjs, sfIntRect rect, sfTime time)
{
    srand((int)sfTime_asMicroseconds(time)); int num = rand() % 100 + 1;
    if (num < 6) {
        num = rand() % 3 + 2;
        num == 2 ? pnjs->stat_num++ : 0;
        num == 3 ? pnjs->stat_num-- : 0;
    }
    pnjs->stat_num > 4 ? pnjs->stat_num = 1 : 0;
    pnjs->stat_num < 1 ? pnjs->stat_num = 4 : 0;
    rect = move_pnjs(game, game->pnjs, rect);
    return rect;
}

void pnj_move(game *game)
{
    sfTime time = sfClock_getElapsedTime(game->clocks->pnj);
    float sec = sfTime_asSeconds(time);
    if (sec > 0.2) {
        sfIntRect rect = sfSprite_getTextureRect(game->pnjs->sprite);
        rect = dir_player(game, game->pnjs, rect, time);
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
    if (game->player->intersection != PNJ)
        pnj_move(game);
    if ((game->player->intersection == PNJ)
    && ((game->player->game_len == 1)
    || (game->player->game_len == 2))) {
        game->player->game_len = 2;
        game->text->len = 3;
    }
    if (game->player->game_len == 2 && game->player->intersection != PNJ)
        game->text->len = 0;
    sfRenderWindow_drawSprite(window, game->pnjs->sprite, NULL);
}
