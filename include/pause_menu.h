/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-maxence.guy
** File description:
** pause_menu
*/

#ifndef PAUSE_MENU_H_
    #define PAUSE_MENU_H_
    #include "button.h"
    #pragma once

// Macros:
    #define PAUSE_MENU_WIDTH 1920
    #define PAUSE_MENU_HEIGHT 1080

// Structures :
    typedef struct pause_menu_t {
        button *resume_button;
        button *quit_button;
        button *settings_button;
        button *load_button;
        button *save_button;
    } pause_menu;

// Functions :
    pause_menu *init_pause_menu(void);
    void display_pause_menu(sfRenderWindow *window, pause_menu *pause_menu);
    void destroy_pause_menu(pause_menu *pause_menu);

#endif /* !PAUSE_MENU_H_ */
