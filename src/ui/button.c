/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** button
*/

#include "../../include/main.h"

void center_button_text(button *button)
{
    sfFloatRect text_bounds = sfText_getLocalBounds(button->text);
    sfVector2f text_position =
    {button->position.x + (button->size.x - text_bounds.width) / 2,
    button->position.y + (button->size.y - text_bounds.height) / 2};
    sfText_setPosition(button->text, text_position);
}

button *init_button(sfVector2f position, sfVector2f size, char *text)
{
    button *button = malloc(sizeof(*button));
    button->rect = sfRectangleShape_create();
    button->position = position;
    button->size = size;
    button->color = sfColor_fromRGB(128, 128, 128);
    button->state = IS_RELEASED;
    button->is_hover = sfFalse;
    sfFont *font = sfFont_createFromFile(
    "ressources/fonts/Oswald-Regular.ttf");
    sfRectangleShape_setPosition(button->rect, position);
    sfRectangleShape_setSize(button->rect, size);
    sfRectangleShape_setFillColor(button->rect, button->color);
    button->text = sfText_create();
    sfText_setString(button->text, text);
    sfText_setFont(button->text, font);
    sfText_setCharacterSize(button->text, 20);
    sfText_setColor(button->text, sfBlack);
    center_button_text(button);

    return button;
}
