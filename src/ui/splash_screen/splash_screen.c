/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** splash_screen
*/

#include "../../../include/splash_screen.h"

void set_textureandsprite(splash_screen_t *splash)
{
    sfSprite_setPosition(splash->start, splash->pos_start);
    sfSprite_setPosition(splash->continued, splash->pos_continue_game);
    sfSprite_setPosition(splash->help, splash->pos_help);
    sfSprite_setPosition(splash->quit, splash->pos_quit);
    sfSprite_setTexture(splash->start, splash->texture_start, sfTrue);
    sfSprite_setTexture(splash->continued, splash->texture_continue, sfTrue);
    sfSprite_setTexture(splash->help, splash->texture_help, sfTrue);
    sfSprite_setTexture(splash->quit, splash->texture_quit, sfTrue);
}

void drawmysprite(splash_screen_t *splash, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, splash->start, NULL);
    sfRenderWindow_drawSprite(window, splash->continued, NULL);
    sfRenderWindow_drawSprite(window, splash->help, NULL);
    sfRenderWindow_drawSprite(window, splash->quit, NULL);
}

options *init_button(splash_screen_t *splash, sfVector2f position,
sfVector2f size, sfRenderWindow *window)
{
    sfSprite *start = sfSprite_create();
    sfTexture *texture_start = sfTexture_createFromFile
    ("ressources/textures/start.png",NULL);
    sfSprite *continued = sfSprite_create();
    sfTexture *texture_continue = sfTexture_createFromFile
    ("ressources/textures/continue.png",NULL);
    sfSprite *help = sfSprite_create();
    sfTexture *texture_help = sfTexture_createFromFile
    ("ressources/textures/help.png", NULL);
    sfSprite *quit = sfSprite_create();
    sfTexture *texture_quit = sfTexture_createFromFile
    ("ressources/textures/quit.png", NULL);
    sfVector2f pos_start = {(position.x / 2)- 64, position.y / 1.9};
    sfVector2f pos_continue_game = {(position.x / 2)- 64, position.y / 1.9};
    sfVector2f pos_help = {(position.x / 2)- 64, position.y / 1.9};
    sfVector2f pos_quit = {(position.x / 2)- 64, position.y / 1.9};
    set_textureandsprite(splash);
    drawmysprite(splash, window);
}

void click_on_it(sfRenderWindow *window, sfMouseButtonEvent event)
{
    sfVector2f start_button = {50, 50};
    if (event.x >= start_button.x && event.x <= start_button.x + 50 &&
    event.y >= start_button.y && event.y <= start_button.y + 50)
        start_newgame(window);
    sfVector2f continue_button = {50, 50};
    if (event.x >= continue_button.x && event.x <= continue_button.x + 50 &&
    event.y >= continue_button.y && event.y <= continue_button.y + 50)
        saved_game(window);
    sfVector2f settings_button = {50, 50};
    if (event.x >= settings_button.x && event.x <= settings_button.x + 50 &&
    event.y >= settings_button.y && event.y <= settings_button.y + 50)
        menu_settings(window);
    sfVector2f quit_button = {50, 50};
    if (event.x >= quit_button.x && event.x <= quit_button.x + 50 &&
    event.y >= quit_button.y && event.y <= quit_button.y + 50)
        exit(0);
}

splash_screen_t *init_splash_screen(sfRenderWindow *window, sfVector2f position,
sfVector2f size, sfMouseButtonEvent event)
{
    splash_screen_t *splash = malloc(sizeof(splash_screen_t));
    sfTexture *texture = sfTexture_createFromFile
    ("../../../ressources/textures/background.png", NULL);
    sfSprite *background = sfSprite_create();
    sfSprite_setTexture(background, texture, sfTrue);
    init_button(splash, position, size, window);
    click_on_it(window, event);
    return init_splash_screen;
}

void display_splash_screen(sfRenderWindow *window,
splash_screen_t *splash);
void destroy_splash_screen(splash_screen_t *splash);
