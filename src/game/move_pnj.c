/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** move_pnj.c
*/

#include "../../include/main.h"
#include "../../include/pnjs.h"
#include "../../include/data.h"
#include "../../include/player.h"
#include "../../include/events.h"
#include <SFML/Graphics/Rect.h>

static sfIntRect move_pnjs_part2(game *game, pnjs *pnjs, sfIntRect rect)
{
    if ((pnjs->stat_num == 3) && gest_col(game, pnjs->pos.x, pnjs->pos.y)) {
        rect.top = 770;
        pnjs->pos.y += 5;
        return rect;
    }
    if (!(gest_col(game, pnjs->pos.x, pnjs->pos.y))) {
        pnjs->stat_num = 1;
        pnjs->pos.y -= 5;
    }
    if ((pnjs->stat_num == 4) && gest_col(game, pnjs->pos.x, pnjs->pos.y)) {
        rect.top = 693;
        pnjs->pos.x -= 5;
        return rect;
    }
    if (!(gest_col(game, pnjs->pos.x, pnjs->pos.y))) {
        pnjs->stat_num = 2;
        pnjs->pos.x += 5;
        return rect;
    }
    return rect;
}

sfIntRect move_pnjs(game* game, pnjs* pnjs, sfIntRect rect)
{
    if ((pnjs->stat_num == 1) && gest_col(game, pnjs->pos.x, pnjs->pos.y)) {
        rect.top = 616;
        pnjs->pos.y -= 5;
        return rect;
    }
    if (!(gest_col(game, pnjs->pos.x, pnjs->pos.y))) {
        pnjs->stat_num = 3;
        pnjs->pos.y += 5;
    }
    if ((pnjs->stat_num == 2) && gest_col(game, pnjs->pos.x, pnjs->pos.y)) {
        rect.top = 847;
        pnjs->pos.x += 5;
        return rect;
    }
    if (!(gest_col(game, pnjs->pos.x, pnjs->pos.y))) {
        pnjs->stat_num = 4;
        pnjs->pos.x -= 5;
    }
    move_pnjs_part2(game, pnjs, rect);
    return rect;
}
