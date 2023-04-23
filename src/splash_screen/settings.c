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

void display_settings(sfRenderWindow *window, settings *settings,
splash_screen *splash)
{
    sfVector2u windowsize = sfRenderWindow_getSize(window);
    sfVector2f pos_parchment = {(windowsize.x / 2) - 300,
    (windowsize.y / 2) - 350};
    sfSprite_setPosition(settings->parchment, pos_parchment);
    sfRenderWindow_drawSprite(window, splash->background, NULL);
    sfRenderWindow_drawSprite(window, settings->parchment, NULL);
}
