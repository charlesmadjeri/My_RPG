/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-maxence.guy
** File description:
** settings
*/

#include "../../include/main.h"
#include "../../include/settings.h"
#include "../../include/data.h"

settings *init_settings(void)
{
    settings *settings = malloc(sizeof(*settings));
    settings->texture_parchment = sfTexture_createFromFile
    ("ressources/splash_screen/textures/settings.png", NULL);
    settings->parchment = sfSprite_create();
    sfSprite_setTexture(settings->parchment,
    settings->texture_parchment, sfTrue);
    sfVector2f scale = {0.5f, 0.5f};
    sfSprite_setScale(settings->parchment, scale);
    return settings;
}

void display_settings(sfRenderWindow *window, game *game)
{
    set_view_to_center(window, game->splash->background, game->view);
    sfRenderWindow_drawSprite(window, game->splash->background, NULL);
    set_view_to_center(window, game->settings->parchment, game->view);
    sfRenderWindow_drawSprite(window, game->settings->parchment, NULL);
}
