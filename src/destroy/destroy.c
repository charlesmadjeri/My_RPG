/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** destroy
*/

#include "../../include/main.h"
#include "../../include/destroy.h"

void destroy_clocks(clocks *clocks)
{
    sfClock_destroy(clocks->rain_clock);
    sfClock_destroy(clocks->cloud_clock);
    free(clocks);
}

void destroy_all(game *game)
{
    //destroy_menus(game);
    destroy_map(game->map);
    destroy_player(game->player);
    destroy_clocks(game->clocks);
    sfMusic_destroy(game->music);
    free(game);
}
