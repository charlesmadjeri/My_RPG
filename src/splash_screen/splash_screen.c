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
    sfVector2f scale = {1.5f, 1.5f};
    splash->start = sfSprite_create();
    splash->start_tex = sfTexture_createFromFile
    ("ressources/splash_screen/textures/start.png",NULL);
    sfSprite_setScale(splash->start, scale);
    splash->continued = sfSprite_create();
    splash->continued_tex = sfTexture_createFromFile
    ("ressources/splash_screen/textures/continue.png",NULL);
    sfSprite_setScale(splash->continued, scale);
    splash->help = sfSprite_create();
    splash->help_tex = sfTexture_createFromFile
    ("ressources/splash_screen/textures/help.png", NULL);
    sfSprite_setScale(splash->help, scale);
    splash->quit = sfSprite_create();
    splash->quit_tex = sfTexture_createFromFile
    ("ressources/splash_screen/textures/quit.png", NULL);
    sfSprite_setScale(splash->quit, scale);
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

void set_view_to_quit(sfRenderWindow *window, sfSprite *sprite, sfView *view)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(sprite);
    sfVector2f center =
    {(rect.left + rect.width / 2) - 726, (rect.top + rect.height / 2) - 400};
    sfView_setCenter(view, center);
    sfRenderWindow_setView(window, view);
}

void display_splash_screen(sfRenderWindow *window,
game *game)
{
    set_view_to_center(window, game->splash->background, game->view);
    sfVector2f pos = sfView_getCenter(game->view);
    sfVector2f start_pos = {pos.x - 1700, pos.y - 600};
    sfVector2f continued_pos = {pos.x - 1700, pos.y - 500};
    sfVector2f help_pos = {pos.x - 1700, pos.y - 400};
    sfSprite_setPosition(game->splash->start, start_pos);
    sfSprite_setPosition(game->splash->continued, continued_pos);
    sfSprite_setPosition(game->splash->help, help_pos);
    sfRenderWindow_drawSprite(window, game->splash->background, NULL);
    set_view_to_center(window, game->splash->start, game->view);
    sfRenderWindow_drawSprite(window, game->splash->start, NULL);
    sfRenderWindow_drawSprite(window, game->splash->continued, NULL);
    sfRenderWindow_drawSprite(window, game->splash->help, NULL);
    set_view_to_quit(window, game->splash->quit, game->view);
    sfRenderWindow_drawSprite(window, game->splash->quit, NULL);
}
