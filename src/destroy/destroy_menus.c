/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** destroy_menus
*/

#include "../../include/main.h"
#include "../../include/destroy.h"

void destroy_button(button *button)
{
    sfRectangleShape_destroy(button->rect);
    sfText_destroy(button->text);
    free(button);
}

void destroy_settings(settings *settings)
{
    sfTexture_destroy(settings->texture_music);
    sfTexture_destroy(settings->texture_sound);
    sfTexture_destroy(settings->texture_resolutions);
    sfSprite_destroy(settings->music);
    sfSprite_destroy(settings->sound);
    sfSprite_destroy(settings->resolutions);
    free(settings);
}

void destroy_splash_screen(splash_screen *splash_screen)
{
    sfSprite_destroy(splash_screen->background);
    sfSprite_destroy(splash_screen->start);
    sfSprite_destroy(splash_screen->continued);
    sfSprite_destroy(splash_screen->help);
    sfSprite_destroy(splash_screen->quit);
    free(splash_screen);
}

void destroy_pause_menu(pause_menu *pause_menu)
{
    sfSprite_destroy(pause_menu->menu);
    free(pause_menu);
}

void destroy_menus(game *game)
{
    destroy_splash_screen(game->splash);
    destroy_pause_menu(game->pause_menu);
    destroy_settings(game->settings);
}
