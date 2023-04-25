/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** destroy_menus
*/

#include "../../include/main.h"
#include "../../include/destroy.h"
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Texture.h>

void destroy_settings(settings *settings)
{
    sfTexture_destroy(settings->texture_parchment);
    sfSprite_destroy(settings->parchment);
    free(settings);
}

void destroy_splash_screen(splash_screen *splash_screen)
{
    sfSprite_destroy(splash_screen->background);
    sfSprite_destroy(splash_screen->start);
    sfSprite_destroy(splash_screen->continued);
    sfSprite_destroy(splash_screen->help);
    sfSprite_destroy(splash_screen->quit);
    sfTexture_destroy(splash_screen->background_texture);
    sfTexture_destroy(splash_screen->start_tex);
    sfTexture_destroy(splash_screen->continued_tex);
    sfTexture_destroy(splash_screen->help_tex);
    sfTexture_destroy(splash_screen->quit_tex);
    free(splash_screen);
}

void destroy_pause_menu(pause_menu *pause_menu)
{
    sfSprite_destroy(pause_menu->menu);
    sfTexture_destroy(pause_menu->text_menu);
    free(pause_menu);
}

void destroy_menus(game *game)
{
    destroy_splash_screen(game->splash);
    destroy_pause_menu(game->pause_menu);
    destroy_settings(game->settings);
}
