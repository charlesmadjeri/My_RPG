/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** button
*/

#ifndef BUTTON_H_
    #define BUTTON_H_
    #include <SFML/Graphics.h>
    #pragma once

// Structures :
    enum e_gui_button_state {
        IS_CLICKED = 1,
        IS_PRESSED = 2,
        IS_RELEASED = 3
    };

    struct s_gui_object {
        struct button_s *button;
        struct s_gui_object *next;
    };

    typedef struct button_t {
        sfRectangleShape *rect;
        sfVector2f position;
        sfVector2f size;
        sfColor color;
        sfText *text;
        enum e_gui_button_state state;
        sfBool is_hover;
    } button;

// Functions :
    button_t *init_button(sfVector2f position, sfVector2f size,
    sfColor color, char *text);
    void press_button(button_t *button);
    void center_button_text(button_t *button);
    void display_button(sfRenderWindow *window, button_t *button);
    void destroy_button(button_t *button);

#endif /* !BUTTON_H_ */
