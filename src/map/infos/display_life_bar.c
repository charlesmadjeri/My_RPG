/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** infos
*/

#include "../../../include/main.h"
#include "../../../include/map.h"
#include "../../../include/player.h"
#include <SFML/Graphics/RenderWindow.h>

static void low_life_switch(sfRenderWindow *window,
life_bar *life_bar, player *player, int level)
{
    switch (level) {
        case (0): sfSprite_setPosition(life_bar->life_bar_sprite0,
        (sfVector2f) {life_bar->life_bar_pos.x, life_bar->life_bar_pos.y});
        sfRenderWindow_drawSprite(window, life_bar->life_bar_sprite0, NULL);
        break;
        case (1): sfSprite_setPosition(life_bar->life_bar_sprite1,
        (sfVector2f) {life_bar->life_bar_pos.x, life_bar->life_bar_pos.y});
        sfRenderWindow_drawSprite(window, life_bar->life_bar_sprite1, NULL);
        break;
        case (2): sfSprite_setPosition(life_bar->life_bar_sprite2,
        (sfVector2f) {life_bar->life_bar_pos.x, life_bar->life_bar_pos.y});
        sfRenderWindow_drawSprite(window, life_bar->life_bar_sprite2, NULL);
        break;
        case (3): sfSprite_setPosition(life_bar->life_bar_sprite3,
        (sfVector2f) {life_bar->life_bar_pos.x, life_bar->life_bar_pos.y});
        sfRenderWindow_drawSprite(window, life_bar->life_bar_sprite3, NULL);
        break;
    }
}

static void high_life_switch(sfRenderWindow *window,
life_bar *life_bar, player *player, int level)
{
    switch (level) {
        case (4): sfSprite_setPosition(life_bar->life_bar_sprite4,
        (sfVector2f){life_bar->life_bar_pos.x, life_bar->life_bar_pos.y});
        sfRenderWindow_drawSprite(window, life_bar->life_bar_sprite4, NULL);
        break;
        case (5): sfSprite_setPosition(life_bar->life_bar_sprite5,
        (sfVector2f){life_bar->life_bar_pos.x, life_bar->life_bar_pos.y});
        sfRenderWindow_drawSprite(window, life_bar->life_bar_sprite5, NULL);
        break;
        case (6): sfSprite_setPosition(life_bar->life_bar_sprite6,
        (sfVector2f){life_bar->life_bar_pos.x, life_bar->life_bar_pos.y});
        sfRenderWindow_drawSprite(window, life_bar->life_bar_sprite6, NULL);
        break;
    }
}

void display_life_bar(sfRenderWindow *window,
player *player, life_bar *life_bar)
{
    float health_percent = (float) player->health / player->max_health;
    int level = (int)(health_percent * 7);
    (level > 6) ? (level = 6) : 0;

    if (level < 4)
        low_life_switch(window, life_bar, player, level);
    else
        high_life_switch(window, life_bar, player, level);
}
