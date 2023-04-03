/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** button
*/

#ifndef BUTTON_H_
    #define BUTTON_H_
    #pragma once

    #include <SFML/Graphics.h>

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

    struct button_s {
        sfRectangleShape *rect;
        sfVector2f position;
        sfVector2f size;
        sfColor default_color;
        sfColor hover_color;
        sfColor pressed_color;
        sfText *text;
        enum e_gui_button_state state;
        sfBool is_hover;
    };

// Functions :
    void center_button_text(struct button_s *button);

#endif /* !BUTTON_H_ */
