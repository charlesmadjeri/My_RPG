/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** help
*/

#include "../../include/main.h"
#include "../../include/game.h"
#include "../../include/map.h"

void display_help(sfRenderWindow *window, game *game)
{
    if (game->state->current_state == MAP) {
        if (game->map->disp_help == sfTrue) {
            sfVector2f pos = sfView_getCenter(game->view);
            sfSprite_setPosition(game->map->help_sprite,
            (sfVector2f){pos.x - 960, pos.y - 540});
            sfRenderWindow_drawSprite(window, game->map->help_sprite, NULL);
        }
    }
    if (game->state->current_state == BATTLE) {
        if (game->battle->disp_help == sfTrue) {
            sfVector2f pos = sfView_getCenter(game->view);
            sfSprite_setPosition(game->map->help_sprite,
            (sfVector2f){pos.x - 960, pos.y - 540});
            sfRenderWindow_drawSprite(window, game->battle->help_sprite, NULL);
        }
    }
}
