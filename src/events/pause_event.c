/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** pause_event
*/

#include "../../include/main.h"
#include "../../include/pause_menu.h"
#include "../../include/game.h"
#include "../../include/events.h"
#include <SFML/Graphics/Sprite.h>

void handle_clic_on_the_pause_menu(sfRenderWindow *window, sfEvent *event,
sfMouseButtonEvent event_mouse, game *game)
{
    sfVector2u windowsize = sfRenderWindow_getSize(window);
    sfVector2f inventory_button = {(windowsize.x / 2) - 190,
    (windowsize.y / 2) - 168};
    if (event_mouse.x >= inventory_button.x &&
    event_mouse.x <= inventory_button.x + 380 &&
    event_mouse.y >= inventory_button.y &&
    event_mouse.y <= inventory_button.y + 64) {
        game->state->previous_state = PAUSE;
        game->state->current_state = INVENTORY;
    }
    sfVector2f settings_button = {(windowsize.x / 2) - 163,
    (windowsize.y / 2) + 80};
    if (event_mouse.x >= settings_button.x &&
    event_mouse.x <= settings_button.x + 327 &&
    event_mouse.y >= settings_button.y &&
    event_mouse.y <= settings_button.y + 80) {
        game->state->previous_state = PAUSE;
        game->state->current_state = SETTINGS_PAUSE;
    }
}

void pause_event(sfRenderWindow *window, sfEvent *event, game *game)
{
    sfMouseButtonEvent event_mouse = event->mouseButton;
    if (event->type == sfEvtMouseButtonPressed)
        handle_clic_on_the_pause_menu(window, event, event_mouse, game);
    if (event->type == sfEvtKeyPressed) {
        if (event->key.code == sfKeyEscape)
            game->state->current_state = game->state->previous_state = MAP;
    } else {
        set_view_to_center(window, game->pause_menu->menu,
        game->view);
    }
}
