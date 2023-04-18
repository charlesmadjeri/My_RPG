/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** destroy
*/

#include "../../include/main.h"
#include "../../include/destroy.h"

void destroy_all(game *game)
{
    //destroy_menus(game);
    destroy_map(game->map);
    destroy_player(game->player);
    sfClock_destroy(game->clock);
    sfMusic_destroy(game->music);
    free(game);
}
