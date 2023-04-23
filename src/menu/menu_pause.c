/*
** EPITECH PROJECT, 2022
** repo
** File description:
** menu_pause.c
*/

#include "../../include/main.h"
#include "../../include/game.h"
#include "../../include/pause_menu.h"
#include "../../include/data.h"
#include "../../include/map.h"
#include <SFML/Graphics/RenderWindow.h>

pause_menu *init_pause_menu(void)
{
    pause_menu *pause_menu = malloc(sizeof(*pause_menu));
    // pause_menu->text_menu = sfTexture_createFromFile
    // ("ressources/maps/textures/pause_menu.png", NULL);
    // pause_menu->menu = sfSprite_create();
    // sfSprite_setTexture(pause_menu->menu, pause_menu->text_menu, sfTrue);
    // sfVector2f scale = {0.8f, 0.8f};
    // sfSprite_setScale(pause_menu->menu, scale);
    return pause_menu;
}

void display_pause_menu(sfRenderWindow *window, pause_menu *pause_menu,
game *game)
{
    sfVector2u windowsize = sfRenderWindow_getSize(window);
    sfVector2f pos_menu_pause = {windowsize.x - 100, windowsize.y - 200};
    // sfSprite_setPosition(pause_menu->menu, pos_menu_pause);
    // sfRenderWindow_drawSprite(window, game->map->map_sprite, NULL);
    // sfRenderWindow_drawSprite(window, pause_menu->menu, NULL);
}
