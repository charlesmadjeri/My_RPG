/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** map
*/

#include "../../include/main.h"
#include "../../include/map.h"
#include "../../include/events.h"
#include "../../include/enemy.h"
#include "../../include/pnjs.h"
#include "../../include/player.h"
#include "../../include/athena.h"
#include "../../include/minotaure.h"
#include "../../include/events.h"
#include "../../include/events.h"

sfSprite *create_sprite_from_rend_tex(sfRenderTexture *map_render_tex)
{
    sfSprite *map_sprite = sfSprite_create();
    const sfTexture *map_texture = sfRenderTexture_getTexture(map_render_tex);
    sfSprite_setTexture(map_sprite, map_texture, sfTrue);
    sfSprite_setPosition(map_sprite, (sfVector2f) {0, 0});
    return map_sprite;
}

void display_map(sfRenderWindow *window, game *game)
{
    set_view_to_center(window, game->player->sprite, game->view);
    sfRenderWindow_drawSprite(window, game->map->map_sprite, NULL);
    display_player(window, game->player);
    display_athena(window, game);
    display_pnjs(window, game);
    display_minotaure(window, game);
    display_weather(window, game);
    display_infos(window, game);
    is_interaction(game);
}
