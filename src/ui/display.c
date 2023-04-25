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
        case SPLASH: display_splash_screen(window, game);
            break;
        case MAP: display_map(window, game);
            break;
        case PAUSE: display_pause_menu(window, game->pause_menu, game);
            break;
        case SETTINGS: display_settings(window, game->settings, game->splash);
            break;
        case INVENTORY: display_inventory(window, game, game->view);
            break;
        case BATTLE: display_battle(window, game);
            break;
        case SETTINGS_PAUSE: display_settings_pause(window, game, game->view);
        default:
            break;
    }
}
