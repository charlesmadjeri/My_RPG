/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** splash_screen
*/

#include "../../../include/main.h"

options *init_button(sfVector2f position, sfVector2f size, sfRenderWindow *window)
{
    sfSprite *start = sfSprite_create();
    sfTexture *texture_start = sfTexture_createFromFile("ressources/textures/start.png", NULL);
    sfSprite *continue_game = sfSprite_create();
    sfTexture *texture_continue = sfTexture_createFromFile("ressources/textures/continue_game.png", NULL);
    sfSprite *help = sfSprite_create();
    sfTexture *texture_help = sfTexture_createFromFile("ressources/textures/help.png", NULL);
    sfSprite *quit = sfSprite_create();
    sfTexture *texture_quit = sfTexture_createFromFile("ressources/textures/quit.png", NULL);
    sfVector2f pos_start = {(position.x / 2)- 64, position.y / 1.9};
    sfVector2f pos_continue_game = {(position.x / 2)- 64, position.y / 1.9};
    sfVector2f pos_help = {(position.x / 2)- 64, position.y / 1.9};
    sfVector2f pos_quit = {(position.x / 2)- 64, position.y / 1.9};
    sfSprite_setPosition(start, pos_start);
    sfSprite_setPosition(continue_game, pos_continue_game);
    sfSprite_setPosition(help, pos_help);
    sfSprite_setPosition(quit, pos_quit);
    sfSprite_setTexture(start, texture_start, sfTrue);
    sfSprite_setTexture(continue_game, texture_continue, sfTrue);
    sfSprite_setTexture(help, texture_help, sfTrue);
    sfSprite_setTexture(quit, texture_quit, sfTrue);
    sfRenderWindow_drawSprite(window, start, NULL);
    sfRenderWindow_drawSprite(window, continue_game, NULL);
    sfRenderWindow_drawSprite(window, help, NULL);
    sfRenderWindow_drawSprite(window, quit, NULL);
}

void click_on_it(sfRenderWindow *window, sfMouseButtonEvent event)
{
    sfVector2f start_button = {50, 50};
    if (event.x >= start_button.x && event.x <= start_button.x + 50 &&
    event.y >= start_button.y && event.y <= start_button.y + 50) {
        start_newgame(window);
    }
    sfVector2f continue_button = {50, 50};
    if (event.x >= continue_button.x && event.x <= continue_button.x + 50 &&
    event.y >= continue_button.y && event.y <= continue_button.y + 50) {
        saved_game(window);
    }
    sfVector2f settings_button = {50, 50};
    if (event.x >= settings_button.x && event.x <= settings_button.x + 50 &&
    event.y >= settings_button.y && event.y <= settings_button.y + 50) {
        menu_settings(window);
    }
    sfVector2f quit_button = {50, 50};
    if (event.x >= quit_button.x && event.x <= quit_button.x + 50 &&
    event.y >= quit_button.y && event.y <= quit_button.y + 50) {
        exit(0);
    }
}

splash_screen *init_splash_screen(sfRenderWindow *window)
{
    splash_screen *splash_screen = malloc(sizeof(*splash_screen));
    sfTexture *texture = sfTexture_createFromFile("../../../ressources/textures/splash_screen.png", NULL);
    sfSprite *background = sfSprite_create();
    sfSprite_setTexture(background, texture, sfTrue);

    return splash_screen;
}

void display_splash_screen(sfRenderWindow *window, splash_screen *splash_screen);
void destroy_splash_screen(splash_screen *splash_screen);
