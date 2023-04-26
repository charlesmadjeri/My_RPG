/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** collision.c
*/

#include "../../include/data.h"
#include "../../include/main.h"
#include "../../include/events.h"
#include <stdbool.h>

bool find_col(sfVector2f pos, int t, int y, int x)
{
    int t_x = (150 * x);
    int t_y = (150 * y);
    int n = 100;
    if ((t > n) && (pos.y <= (t_y + 150)) && (pos.y >= t_y))
        if (pos.x >= t_x && pos.x <= (t_x + 150))
            return false;
    return true;
}

bool gest_col2(game* game, sfVector2f pos, int** tab, int y)
{
    for (int x = 0; x < 36; x++) {
        if (!find_col(pos, tab[y][x], y, x))
            return false;
    }
    return true;
}

bool gest_col(game* game, int pos_x, int pos_y)
{
    sfVector2f pos = {pos_x + 35, pos_y + 55};
    int** tab = game->map->map_data->matrice;

    for (int y = 0; y < 21; y++) {
        if (!(gest_col2(game, pos, tab, y)))
            return false;
    }
    if ((pos.x <= 0) || (pos.x >= 5323) || (pos.y <= 0) || (pos.y >= 3073))
        return false;
    return true;
}
