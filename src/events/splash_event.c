/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** splash_event
*/

#include "../../include/main.h"
#include "../../include/splash_screen.h"
#include <SFML/Graphics/RenderWindow.h>

void splash_event(sfRenderWindow *window, sfEvent *event, game *game)
{
    sfVector2u windowsize = sfRenderWindow_getSize(window);
    sfMouseButtonEvent event_mouse = event->mouseButton;
    if (event->type == sfEvtMouseButtonPressed) {
        // sfVector2f start_button = {windowsize.x - 1700, windowsize.y - 600};
        // if (event_mouse.x >= start_button.x && event_mouse.x <= start_button.x + 241 &&
        // event_mouse.y >= start_button.y && event_mouse.y <= start_button.y + 73)
        //     start_newgame(window);
        // sfVector2f continue_button = {windowsize.x - 1700, windowsize.y - 500};
        // if (event_mouse.x >= continue_button.x && event_mouse.x <= continue_button.x + 244 &&
        // event_mouse.y >= continue_button.y && event_mouse.y <= continue_button.y + 70)
        //     saved_game(window);
        sfVector2f settings_button = {windowsize.x - 1700, windowsize.y - 400};
        if (event_mouse.x >= settings_button.x && event_mouse.x <= settings_button.x + 238 &&
        event_mouse.y >= settings_button.y && event_mouse.y <= settings_button.y + 70) {
            game->state->current_state = SETTINGS;
            game->state->previous_state = SPLASH;
        }
        sfVector2f quit_button = {windowsize.x - 235, windowsize.y - 100};
        if (event_mouse.x > quit_button.x && event_mouse.x < quit_button.x + 176 &&
        event_mouse.y > quit_button.y && event_mouse.y < quit_button.y + 65) {
            sfRenderWindow_close(window);
        }
    }
}
