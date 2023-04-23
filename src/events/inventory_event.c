/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** inventory_event
*/

#include "../../include/main.h"
#include "../../include/inventory.h"
#include <SFML/Graphics/Sprite.h>

void set_view_to_center(sfRenderWindow *window, sfSprite *sprite, sfView *view)
{
    sfVector2f pos = sfSprite_getPosition(sprite);
    sfFloatRect rect = sfSprite_getGlobalBounds(sprite);
    sfVector2f center =
    {rect.left + rect.width / 2.f, rect.top + rect.height / 2.f};
    sfView_setCenter(view, center);
    sfRenderWindow_setView(window, view);
}

void inventory_event(sfRenderWindow *window, sfEvent *event, game *game)
{
    if (event->type == sfEvtKeyPressed) {
        if (event->key.code == sfKeyEscape)
            game->state->current_state = game->state->previous_state;
    } else
        set_view_to_center(window, game->player->inventory->background,
        game->view);
}
