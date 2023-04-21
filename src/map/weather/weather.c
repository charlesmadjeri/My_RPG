/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** weather
*/

#include "../../../include/main.h"
#include "../../../include/map.h"
#include "../../../include/ui.h"

void move_clouds(game *game)
{
    sfTime time = sfClock_getElapsedTime(game->clocks->cloud_clock);
    float cloud_seconds = sfTime_asSeconds(time);
    if (cloud_seconds > CLOUDS_SPEED) {
        game->map->weather->cloud_pos.x += CLOUDS_MOVE_AMOUNT;
        if (game->map->weather->cloud_pos.x > 0)
            game->map->weather->cloud_pos.x = -MAP_WIDTH_PX;
        sfClock_restart(game->clocks->cloud_clock);
    }
}

void move_rain(game *game)
{
    sfTime rain_time = sfClock_getElapsedTime(game->clocks->rain_clock);
    float rain_seconds = sfTime_asSeconds(rain_time);
    if (rain_seconds > RAIN_SPEED) {
        game->map->weather->rain_pos.y += RAIN_MOVE_AMOUNT;
        if (game->map->weather->rain_pos.y > 0) {
            game->map->weather->rain_pos.y = -MAP_HEIGHT_PX;
        }
        sfClock_restart(game->clocks->rain_clock);
    }
}

void display_weather(sfRenderWindow *window, game *game)
{
    move_clouds(game);
    move_rain(game);

    sfSprite_setPosition(game->map->weather->cloud_sprite,
    game->map->weather->cloud_pos);
    sfSprite_setPosition(game->map->weather->rain_sprite,
    game->map->weather->rain_pos);
    if (game->map->weather->is_raining == sfTrue)
        sfRenderWindow_drawSprite(window,
        game->map->weather->rain_sprite, NULL);
    sfRenderWindow_drawSprite(window, game->map->weather->cloud_sprite, NULL);
}
