/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** splash_screen
*/

#include "../../include/main.h"
#include "../../include/game.h"
#include "../../include/splash_screen.h"
#include "../../include/data.h"

void set_texture_and_sprite(splash_screen *splash)
{
    splash->start_pos.x = 100;
    splash->start_pos.y = 100;
    splash->continued_pos.x = 200;
    splash->continued_pos.y = 100;
    splash->help_pos.x = 300;
    splash->help_pos.y = 100;
    splash->quit_pos.x = 400;
    splash->quit_pos.y = 100;
    sfSprite_setTexture(splash->start, splash->start_tex, sfTrue);
    sfSprite_setTexture(splash->continued, splash->continued_tex, sfTrue);
    sfSprite_setTexture(splash->help, splash->help_tex, sfTrue);
    sfSprite_setTexture(splash->quit, splash->quit_tex, sfTrue);
    sfSprite_setPosition(splash->start, splash->start_pos);
    sfSprite_setPosition(splash->continued, splash->continued_pos);
    sfSprite_setPosition(splash->help, splash->help_pos);
    sfSprite_setPosition(splash->quit, splash->quit_pos);
}

void init_splash_button(splash_screen *splash)
{
    splash->start = sfSprite_create();
    splash->start_tex = sfTexture_createFromFile
    ("ressources/splash_screen/textures/start.png",NULL);
    splash->continued = sfSprite_create();
    splash->continued_tex = sfTexture_createFromFile
    ("ressources/splash_screen/textures/continue.png",NULL);
    splash->help = sfSprite_create();
    splash->help_tex = sfTexture_createFromFile
    ("ressources/splash_screen/textures/help.png", NULL);
    splash->quit = sfSprite_create();
    splash->quit_tex = sfTexture_createFromFile
    ("ressources/splash_screen/textures/quit.png", NULL);
    set_texture_and_sprite(splash);
}

splash_screen *init_splash_screen(void)
{
    splash_screen *splash = malloc(sizeof(splash_screen));
    sfTexture *texture = sfTexture_createFromFile
    ("ressources/splash_screen/textures/background.png", NULL);
    splash->background = sfSprite_create();
    sfSprite_setPosition(splash->background, (sfVector2f) {0, 0});
    sfSprite_setTexture(splash->background, texture, sfTrue);
    init_splash_button(splash);
    return splash;
}

void display_splash_screen(sfRenderWindow *window,
splash_screen *splash)
{
    sfRenderWindow_drawSprite(window, splash->background, NULL);
    sfRenderWindow_drawSprite(window, splash->start, NULL);
    sfRenderWindow_drawSprite(window, splash->continued, NULL);
    sfRenderWindow_drawSprite(window, splash->help, NULL);
    sfRenderWindow_drawSprite(window, splash->quit, NULL);
}

void destroy_splash_screen(splash_screen *splash);
