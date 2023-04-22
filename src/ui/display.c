/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** display
*/

#include "../../include/main.h"
#include "../../include/ui.h"
#include "../../include/game.h"
#include "../../include/splash_screen.h"
#include "../../include/player.h"
#include "../../include/map.h"
#include "../../include/pause_menu.h"
#include "../../include/settings.h"
#include "../../include/inventory.h"
#include "../../include/battle.h"

void display(sfRenderWindow *window, game *game)
{
    switch (game->state->current_state) {
        case SPLASH: display_splash_screen(window, game->splash);
            break;
        case MAP: display_map(window, game);
            break;
        case PAUSE: //display_pause_menu(window, game->pause_menu);
            break;
        case SETTINGS: display_settings(window, game->settings);
            break;
        case INVENTORY: //display_inventory(window, game->player->inventory);
            break;
        case BATTLE: //display_battle(window, game->battle);
            break;
        default:
            break;
    }
}
