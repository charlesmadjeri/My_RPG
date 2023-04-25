/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** destroy
*/

#include "../../include/main.h"
#include "../../include/destroy.h"
#include "../../include/data.h"

void destroy_clocks(clocks *clocks)
{
    sfClock_destroy(clocks->rain_clock);
    sfClock_destroy(clocks->cloud_clock);
    sfClock_destroy(clocks->athena);
    sfClock_destroy(clocks->minotaure);
    sfClock_destroy(clocks->player);
    sfClock_destroy(clocks->pnj);
    sfClock_destroy(clocks->view);
    sfClock_destroy(clocks->text);
    free(clocks);
}

void destroy_all(game *game, sfRenderWindow *window)
{
    if (game == NULL || window == NULL)
        return;
    destroy_menus(game);
    //destroy_map(game->map);
    destroy_clocks(game->clocks);
    destroy_battle(game->battle);
    destroy_player(game->player);
    destroy_athena(game->athena);
    destroy_minotaure(game->minotaure);
    destroy_text(game->text);
    sfMusic_destroy(game->music);
    free(game->state);
    free(game);
}
