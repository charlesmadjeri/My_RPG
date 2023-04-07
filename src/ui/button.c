/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** button
*/

#include "../../include/main.h"

void center_button_text(struct button_s *button)
{
    sfFloatRect text_bounds = sfText_getLocalBounds(button->text);
    sfVector2f text_position =
    {button->position.x + (button->size.x - text_bounds.width) / 2,
    button->position.y + (button->size.y - text_bounds.height) / 2};
    sfText_setPosition(button->text, text_position);
}

struct button_s *init_button(sfVector2f position,
sfVector2f size, sfColor color, char *text)
{
    struct button_s *button = malloc(sizeof(struct button_s));
    button->position = position;
    button->size = size;
    button->color = color;
    button->text = sfText_create();
    sfText_setString(button->text, text);
    sfText_setFont(button->text,
    sfFont_createFromFile("assets/fonts/arial.ttf"));
    sfText_setCharacterSize(button->text, 30);
    sfText_setColor(button->text, sfBlack);

    center_button_text(button);
    return (button);
}
