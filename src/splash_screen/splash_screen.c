/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** splash_screen
*/

#include "../../include/main.h"
#include "../../include/game.h"
#include "../../include/splash_screen.h"

void set_texture_and_sprite(splash_screen_t *splash)
{
    sfVector2f position;
    sfVector2f pos_start = {(position.x / 2)- 64, position.y / 1.9};
    sfVector2f pos_continue_game = {(position.x / 2)- 64, position.y / 1.9};
    sfVector2f pos_help = {(position.x / 2)- 64, position.y / 1.9};
    sfVector2f pos_quit = {(position.x / 2)- 64, position.y / 1.9};
    sfTexture *texture_start;
    sfTexture *texture_continue;
    sfTexture *texture_help;
    sfTexture *texture_quit;
    sfSprite_setPosition(splash->start, pos_start);
    sfSprite_setPosition(splash->continued, pos_continue_game);
    sfSprite_setPosition(splash->help, pos_help);
    sfSprite_setPosition(splash->quit, pos_quit);
    sfSprite_setTexture(splash->start, texture_start, sfTrue);
    sfSprite_setTexture(splash->continued, texture_continue, sfTrue);
    sfSprite_setTexture(splash->help, texture_help, sfTrue);
    sfSprite_setTexture(splash->quit, texture_quit, sfTrue);
}

void init_button(splash_screen_t *splash)
{
    splash->start = sfSprite_create();
    sfTexture *texture_start = sfTexture_createFromFile
    ("ressources/textures/start.png",NULL);
    splash->continued = sfSprite_create();
    sfTexture *texture_continue = sfTexture_createFromFile
    ("ressources/textures/continue.png",NULL);
    splash->help = sfSprite_create();
    sfTexture *texture_help = sfTexture_createFromFile
    ("ressources/textures/help.png", NULL);
    splash->quit = sfSprite_create();
    sfTexture *texture_quit = sfTexture_createFromFile
    ("ressources/textures/quit.png", NULL);
    set_texture_and_sprite(splash);
}

splash_screen_t *init_splash_screen(void)
{
    splash_screen_t *splash = malloc(sizeof(splash_screen_t));
    sfTexture *texture = sfTexture_createFromFile
    ("ressources/textures/background.png", NULL);
    splash->background = sfSprite_create();
    sfSprite_setTexture(splash->background, texture, sfTrue);
    init_button(splash);
    return splash;
}   

void display_splash_screen(sfRenderWindow *window,
splash_screen_t *splash)
{
    sfRenderWindow_drawSprite(window, splash->background, NULL);
    sfRenderWindow_drawSprite(window, splash->start, NULL);
    sfRenderWindow_drawSprite(window, splash->continued, NULL);
    sfRenderWindow_drawSprite(window, splash->help, NULL);
    sfRenderWindow_drawSprite(window, splash->quit, NULL);   
}

void destroy_splash_screen(splash_screen_t *splash);
