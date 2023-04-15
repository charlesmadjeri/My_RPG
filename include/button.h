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

    typedef struct button_t {
        sfRectangleShape *rect;
        sfVector2f position;
        sfVector2f size;
        sfColor color;
        sfText *text;
        enum e_gui_button_state state;
        sfBool is_hover;
    } button;

    typedef struct buttons_t {
        button *button;
        struct s_gui_object *next;
    } buttons;

// Functions :
    options *init_button(splash_screen_t *splash, sfVector2f position,
    sfVector2f size, sfRenderWindow *window);
    void press_button(button *button);
    void center_button_text(button *button);
    void display_button(sfRenderWindow *window, button *button);
    void destroy_button(button *button);

#endif /* !BUTTON_H_ */
