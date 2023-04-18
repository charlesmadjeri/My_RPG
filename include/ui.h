/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** ui
*/

#ifndef UI_H_
    #define UI_H_
    #include <SFML/Graphics.h>
    #include "data.h"
    #pragma once

// Macros :
    #define WINDOW_WIDTH 1920
    #define WINDOW_HEIGHT 1080

// Functions:
    sfRenderWindow *init_window(void);
    void display(sfRenderWindow *window, game *game);

#endif /* !UI_H_ */
