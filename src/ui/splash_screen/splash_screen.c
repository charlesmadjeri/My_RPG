/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** splash_screen
*/

#include "../../../include/main.h"
#include "../../../include/splash_screen.h"

options *init_options(void)
{
    options *options = malloc(sizeof(*options));
    options->load_game_button = init_button((sfVector2f){0, 0},
    (sfVector2f){0, 0}, "LOAD GAME");
    options->new_game_button = init_button((sfVector2f){0, 0},
    (sfVector2f){0, 0}, "NEW GAME");
    options->settings_button = init_button((sfVector2f){0, 0},
    (sfVector2f){0, 0}, "SETTINGS");
    options->quit_button = init_button((sfVector2f){0, 0},
    (sfVector2f){0, 0}, "QUIT");
    return options;
}

splash_screen *init_splash_screen(void)
{
    splash_screen *splash_screen = malloc(sizeof(*splash_screen));

    splash_screen->options = init_options();
    splash_screen->texture =
    sfTexture_createFromFile("assets/splash_screen.png", NULL);
    splash_screen->sprite = sfSprite_create();
    sfSprite_setTexture(splash_screen->sprite, splash_screen->texture,
    sfTrue);

    return splash_screen;
}

void display_splash_screen(sfRenderWindow *window,
splash_screen *splash_screen);
void destroy_splash_screen(splash_screen *splash_screen);
