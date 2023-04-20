/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** button
*/

#ifndef BUTTON_H_
    #define BUTTON_H_
    #include <SFML/Graphics.h>
    #include "data.h"
    #pragma once

// Functions :
    button *init_button(sfVector2f position, sfVector2f size, char *text);
    void press_button(button *button);
    void center_button_text(button *button);
    void display_button(sfRenderWindow *window, button *button);
    void destroy_button(button *button);

#endif /* !BUTTON_H_ */
