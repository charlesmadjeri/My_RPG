/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** button
*/

#include "../../include/main.h"
#include "../../include/ui.h"
#include "../../include/button.h"

void center_button_text(button *button)
{
    sfFloatRect text_bounds = sfText_getLocalBounds(button->text);
    sfVector2f text_position =
    {button->position.x + (button->size.x - text_bounds.width) / 2,
    button->position.y + (button->size.y - text_bounds.height) / 2};
    sfText_setPosition(button->text, text_position);
}

void display_button(sfRenderWindow *window, button *button)
{
    sfRenderWindow_drawRectangleShape(window, button->rect, NULL);
    sfRenderWindow_drawText(window, button->text, NULL);
}
