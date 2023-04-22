/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** events
*/

#include "../../include/main.h"
#include "../../include/game.h"
#include "../../include/battle.h"
#include "../../include/events.h"
#include "../../include/ui.h"

void analyse_event(sfRenderWindow *window, sfEvent *event, game *game)
{
    if (event->type == sfEvtClosed)
        sfRenderWindow_close(window);
    switch (game->state->current_state) {
        case SPLASH: splash_event(window, event, game);
            break;
        case MAP: map_event(window, event, game);
            break;
        case PAUSE: pause_event(window, event, game);
            break;
        case SETTINGS: settings_event(window, event, game);
            break;
        case INVENTORY: inventory_event(window, event, game);
            break;
        case BATTLE: battle_event(window, event, game);
            break;
        default:
            break;
    }
}
