/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** splash_event
*/

#include "../../include/main.h"
#include "../../include/game.h"
#include "../../include/splash_screen.h"
#include "../../include/destroy.h"
#include <SFML/Graphics/RenderWindow.h>

void handle_quit_and_settings_for_the_fucking_codn_style(sfRenderWindow *window,
sfMouseButtonEvent event_mouse, game *game)
{
    sfVector2u windowsize = sfRenderWindow_getSize(window);
    sfVector2f settings_button =
    {(windowsize.x / 2) - 170, (windowsize.y / 2) + 130};
    if (event_mouse.x >= settings_button.x &&
    event_mouse.x <= settings_button.x + 357 &&
    event_mouse.y >= settings_button.y &&
    event_mouse.y <= settings_button.y + 105) {
        game->state->current_state = SETTINGS;
        game->state->previous_state = SPLASH;
    }
    sfVector2f quit_button =
    {(windowsize.x / 2) + 600, (windowsize.y / 2) + 300};
    if (event_mouse.x > quit_button.x &&
    event_mouse.x < quit_button.x + 264 &&
    event_mouse.y > quit_button.y &&
    event_mouse.y < quit_button.y + 97.5)
        sfRenderWindow_close(window);
}

void splash_event(sfRenderWindow *window, sfEvent *event, game *game)
{
    sfVector2u windowsize = sfRenderWindow_getSize(window);
    sfMouseButtonEvent event_mouse = event->mouseButton;
    if (event->type == sfEvtMouseButtonPressed) {
        sfVector2f start_button =
        {(windowsize.x / 2) - 170, (windowsize.y / 2) - 70};
        if (event_mouse.x >= start_button.x &&
        event_mouse.x <= start_button.x + 361.5 &&
        event_mouse.y >= start_button.y &&
        event_mouse.y <= start_button.y + 109.5) {
            game->state->previous_state = SPLASH;
            game->state->current_state = MAP;
        }
        handle_quit_and_settings_for_the_fucking_codn_style(window,
        event_mouse, game);
    }
}
