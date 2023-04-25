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
#include "../../include/ui.h"
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/System/Vector2.h>

void set_texture_and_sprite(splash_screen *splash)
{
    sfSprite_setTexture(splash->start, splash->start_tex,
    sfTrue);
    sfSprite_setTexture(splash->continued, splash->continued_tex,
    sfTrue);
    sfSprite_setTexture(splash->help, splash->help_tex,
    sfTrue);
    sfSprite_setTexture(splash->quit, splash->quit_tex,
    sfTrue);
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
    splash->background_texture = sfTexture_createFromFile
    ("ressources/splash_screen/textures/background_splash.png", NULL);
    splash->background = sfSprite_create();
    sfSprite_setTexture(splash->background, splash->background_texture, sfTrue);
    init_splash_button(splash);
    return splash;
}

void display_splash_screen(sfRenderWindow *window,
game *game)
{
    set_view_to_center(window, game->splash->background, game->view);
    sfVector2f pos = sfView_getCenter(game->view);
    sfVector2f start_pos = {pos.x - 1700, pos.y - 600};
    sfVector2f continued_pos = {pos.x - 1700, pos.y - 500};
    sfVector2f help_pos = {pos.x - 1700, pos.y - 400};
    sfVector2f quit_pos = {pos.x - 235, pos.y - 100};
    sfSprite_setPosition(game->splash->start, start_pos);
    sfSprite_setPosition(game->splash->continued, continued_pos);
    sfSprite_setPosition(game->splash->help, help_pos);
    sfSprite_setPosition(game->splash->quit, quit_pos);
    sfRenderWindow_drawSprite(window, game->splash->background, NULL);
    sfRenderWindow_drawSprite(window, game->splash->start, NULL);
    sfRenderWindow_drawSprite(window, game->splash->continued, NULL);
    sfRenderWindow_drawSprite(window, game->splash->help, NULL);
    sfRenderWindow_drawSprite(window, game->splash->quit, NULL);
}
