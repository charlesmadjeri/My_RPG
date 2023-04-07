/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** ui
*/

#ifndef UI_H_
    #define UI_H_
    #pragma once

    #include <SFML/Graphics.h>
    #include "game.h"
    #include "button.h"

// Macros :
    #define WINDOW_WIDTH 1920
    #define WINDOW_HEIGHT 1080

// Structures :
    struct s_gui_menu_bar {
        struct s_gui_drop_menu *drop_menus;
        struct s_gui_menu_bar *next;
    };

    struct s_gui_options {
        struct button_s *button;
        struct s_gui_object *option;
        struct s_gui_options *next;
    };

    struct s_gui_drop_menu {
        struct button_s *button;
        struct s_gui_options *options;
        sfBool is_open;
        struct s_gui_drop_menu *next;
    };

// Functions:
    sfRenderWindow *init_window(void);
    struct button_t *init_button(sfVector2f position,
    sfVector2f size, sfColor color, char *text);
    void display(sfRenderWindow *window, game_t *game);

#endif /* !UI_H_ */
