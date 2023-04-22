/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** infos
*/

#include "../../../include/main.h"
#include "../../../include/map.h"

static void get_positions(sfView *view, infos *infos)
{
    infos->level_nb->level_nb_pos.x = (sfView_getCenter(view).x + 575);
    infos->level_nb->level_nb_pos.y = (sfView_getCenter(view).y - 625);
    infos->life_bar->life_bar_pos.x = (sfView_getCenter(view).x - 1050);
    infos->life_bar->life_bar_pos.y = (sfView_getCenter(view).y - 600);
    infos->xp_bar->xp_bar_pos.x = (sfView_getCenter(view).x + 250);
    infos->xp_bar->xp_bar_pos.y = (sfView_getCenter(view).y - 670);
    infos->spell_bar->spell_bar_pos.x = (sfView_getCenter(view).x + 250);
    infos->spell_bar->spell_bar_pos.y = (sfView_getCenter(view).y - 570);
}

void display_infos(sfRenderWindow *window, game *game)
{
    get_positions(game->view, game->map->infos);
    display_spell_bar();
    display_level(window, game->player, game->map->infos->level_nb);
    display_life_bar(window, game->player, game->map->infos->life_bar);
    display_xp_bar(window, game->player, game->map->infos->xp_bar);
}
