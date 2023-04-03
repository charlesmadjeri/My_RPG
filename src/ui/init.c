/*
** EPITECH PROJECT, 2022
** S1
** File description:
** init_fc
*/

#include "../../include/main.h"
#include "../../include/ui.h"
#include "../../include/button.h"

sfRenderWindow *init_window(void)
{
    sfVideoMode mode = { WINDOW_WIDTH , WINDOW_HEIGHT , 32 };
    sfRenderWindow *window = sfRenderWindow_create(mode,
    "My Paint", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    return window;
}

struct button_s *init_button(sfVector2f position, sfVector2f size, char *text)
{
    struct button_s *button = malloc(sizeof(struct button_s));
    button->rect = sfRectangleShape_create();
    button->position = position;
    button->size = size;
    button->default_color = sfColor_fromRGB(128, 128, 128);
    button->state = IS_RELEASED;
    button->is_hover = sfFalse;
    sfFont *font = sfFont_createFromFile(
    "ressources/fonts/Oswald-Regular.ttf");
    sfRectangleShape_setPosition(button->rect, position);
    sfRectangleShape_setSize(button->rect, size);
    sfRectangleShape_setFillColor(button->rect, button->default_color);
    button->text = sfText_create();
    sfText_setString(button->text, text);
    sfText_setFont(button->text, font);
    sfText_setCharacterSize(button->text, 20);
    sfText_setColor(button->text, sfBlack);
    center_button_text(button);

    return button;
}
