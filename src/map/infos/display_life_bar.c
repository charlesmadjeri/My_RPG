/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** infos
*/

#include "../../../include/main.h"
#include "../../../include/map.h"
#include "../../../include/player.h"
#include <SFML/Graphics/Types.h>

void display_level(sfRenderWindow *window, player *player, level_nb *level_nb)
{
    int x_comp = (WINDOW_WIDTH / 2) - 100;
    int y_comp = (WINDOW_HEIGHT / 2) - 100;

    switch (player->level) {
        case 1: sfSprite_setPosition(level_nb->level_1_sprite,
            (sfVector2f) {player->pos.x + x_comp, player->pos.y - y_comp});
            sfRenderWindow_drawSprite(window, level_nb->level_1_sprite, NULL);
            break;
        case 2: sfSprite_setPosition(level_nb->level_2_sprite,
            (sfVector2f) {player->pos.x + x_comp, player->pos.y - y_comp});
            sfRenderWindow_drawSprite(window, level_nb->level_2_sprite, NULL);
            break;
        case 3: sfSprite_setPosition(level_nb->level_3_sprite,
            (sfVector2f) {player->pos.x + x_comp, player->pos.y - y_comp});
            sfRenderWindow_drawSprite(window, level_nb->level_3_sprite, NULL);
            break;
    }
}

void low_life_switch(sfRenderWindow *window,
life_bar *life_bar, player *player, int level)
{
    int x_comp = - (WINDOW_WIDTH / 2) - 100;
    int y_comp = (WINDOW_HEIGHT / 2) - 100;
    switch (level) {
        case (0): sfSprite_setPosition(life_bar->life_bar_sprite0,
        (sfVector2f) {player->pos.x + x_comp, player->pos.y - y_comp});
        sfRenderWindow_drawSprite(window, life_bar->life_bar_sprite0, NULL);
        break;
        case (1): sfSprite_setPosition(life_bar->life_bar_sprite1,
        (sfVector2f) {player->pos.x + x_comp, player->pos.y - y_comp});
        sfRenderWindow_drawSprite(window, life_bar->life_bar_sprite1, NULL);
        break;
        case (2): sfSprite_setPosition(life_bar->life_bar_sprite2,
        (sfVector2f) {player->pos.x + x_comp, player->pos.y - y_comp});
        sfRenderWindow_drawSprite(window, life_bar->life_bar_sprite2, NULL);
        break;
        case (3): sfSprite_setPosition(life_bar->life_bar_sprite3,
        (sfVector2f) {player->pos.x + x_comp, player->pos.y - y_comp});
        sfRenderWindow_drawSprite(window, life_bar->life_bar_sprite3, NULL);
        break;
    }
}

void high_life_switch(sfRenderWindow *window,
life_bar *life_bar, player *player, int level)
{
    int x_comp = - (WINDOW_WIDTH / 2) - 100;
    int y_comp = (WINDOW_HEIGHT / 2) - 100;
    switch (level) {
        case (4): sfSprite_setPosition(life_bar->life_bar_sprite4,
        (sfVector2f){player->pos.x + x_comp, player->pos.y - y_comp});
        sfRenderWindow_drawSprite(window, life_bar->life_bar_sprite4, NULL);
        break;
        case (5): sfSprite_setPosition(life_bar->life_bar_sprite5,
        (sfVector2f){player->pos.x + x_comp, player->pos.y - y_comp});
        sfRenderWindow_drawSprite(window, life_bar->life_bar_sprite5, NULL);
        break;
        case (6): sfSprite_setPosition(life_bar->life_bar_sprite6,
        (sfVector2f){player->pos.x + x_comp, player->pos.y - y_comp});
        sfRenderWindow_drawSprite(window, life_bar->life_bar_sprite6, NULL);
        break;
        case (7): sfSprite_setPosition(life_bar->life_bar_sprite7,
        (sfVector2f){player->pos.x + x_comp, player->pos.y - y_comp});
        sfRenderWindow_drawSprite(window, life_bar->life_bar_sprite7, NULL);
        break;
    }
}

void display_life_bar(sfRenderWindow *window,
player *player, life_bar *life_bar)
{
    float health_percent = (float) player->health / player->max_health;
    int level = (int)(health_percent * 8);
    (level > 7) ? (level = 7) : 0;

    if (level < 4)
        low_life_switch(window, life_bar, player, level);
    else
        high_life_switch(window, life_bar, player, level);
}

void display_xp_bar(sfRenderWindow *window, player *player, xp_bar *xp_bar)
{
    int x_comp = (WINDOW_WIDTH / 2) - 200;
    int y_comp = (WINDOW_HEIGHT / 2) - 100;
}

void display_infos(sfRenderWindow *window, game *game)
{
    display_level(window, game->player, game->map->infos->level_nb);
    display_life_bar(window, game->player, game->map->infos->life_bar);
    display_xp_bar(window, game->player, game->map->infos->xp_bar);
}
