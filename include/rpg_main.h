/*
** EPITECH PROJECT, 2022
** Epitech
** File description:
** header
*/

#ifndef HEADER_H_
    #define HEADER_H_

    #pragma once

    #include <stdio.h>
    #include <unistd.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <limits.h>
    #include <sys/types.h>
    #include <sys/wait.h>
    #include <errno.h>
    #include <signal.h>
    #include <fcntl.h>
    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <SFML/Config.h>
    #include <SFML/System.h>

// Macros :

    #define WINDOW_WIDTH 800
    #define WINDOW_HEIGHT 600

    enum e_gui_button_state {
        IS_CLICKED = 1,
        IS_PRESSED = 2,
        IS_RELEASED = 3
    };

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

    struct sheet_s{
        sfImage *image;
        sfSprite *sprite;
        sfTexture *texture;
    };

    struct pencil_s{
        sfColor color;
        sfVector2i size;
    };

    struct trace_s {
        sfSprite *sprite;
        sfTexture *texture;
    };

    struct game_s {
        struct pencil_s *pencil;
        struct trace_s *trace;
        struct sheet_s *sheet;
        bool mouse_pressed;
    };

// Lib/*.c
    void my_putstr(char const *str);
    int my_putchar(char c);
    bool my_getnbr(const char *str, int *nbr);
    void my_putnbr(long long nb);
    int my_strlen(char const *str);
    bool my_swap(int *value1, int *value2);
    char *my_strcpy(char *dest, char const *src);
    bool my_strcmp(char const *s1, char const *s2);

// Program/*.c

// Program/init.c
    sfRenderWindow *init_window(void);
    struct s_gui_drop_menu *init_drop_menu(sfVector2f position,
    sfVector2f size, char *text);
    struct button_s *init_button(sfVector2f position,
    sfVector2f size, char *text);
    struct s_gui_menu_bar *init_menu_bar(void);

// Program/analyse_event.c
    void analyse_event(sfRenderWindow *window, sfEvent *event,
    struct game_s *game, struct s_gui_menu_bar *menu_bar);

// Program/sheet_events.c
    sfBool sheet_is_clicked(sfRenderWindow *window, struct sheet_s *sheet,
    sfEvent *event);

// Program/menu_bar_events.c
    void menu_bar_action(struct s_gui_menu_bar *menu_bar,
    sfMouseButtonEvent *mouse_button);
    sfBool menu_bar_is_clicked(struct s_gui_menu_bar *menu_bar,
    sfMouseButtonEvent *mouse_button);

// Program/button.c
    sfBool button_is_clicked(struct button_s *button,
    sfMouseButtonEvent *event);
    sfBool button_is_hover(struct button_s *button, sfMouseMoveEvent *event);
    void button_set_color(struct button_s *button);
    void center_button_text(struct button_s *button);

// Program/menu_bar.c
    struct s_gui_menu_bar *add_drop_menu_to_menu_bar(struct s_gui_menu_bar
    *menu_bar, struct s_gui_drop_menu *drop_menu);
    void position_drop_menu_in_menu_bar(struct s_gui_menu_bar *menu_bar);

// Program/drop_menu.c
    struct s_gui_drop_menu *declare_drop_menu(int menu_nb);
    struct s_gui_drop_menu *add_option_drop_menu(struct s_gui_drop_menu
*drop_menu, sfVector2f position, sfVector2f size, char *option_name);

// Program/drop_menu_options.c
    struct s_gui_drop_menu *set_drop_menu_1_options(struct s_gui_drop_menu
    *drop_menu, int menu_nb);
    struct s_gui_drop_menu *set_drop_menu_2_options(struct s_gui_drop_menu
    *drop_menu, int menu_nb);
    struct s_gui_drop_menu *set_drop_menu_3_options(struct s_gui_drop_menu
    *drop_menu, int menu_nb);

// Program/draw_elements.c
    void draw_menu_bar(sfRenderWindow *window,
    struct s_gui_menu_bar *menu_bar);

// Program/backgound.c
    struct sheet_s *init_sheet(void);
    void display_game(sfRenderWindow *window, struct game_s *game);

// Program/pencil.c
    struct pencil_s *init_pencil(void);
    struct trace_s *init_trace(void);
    void put_pixel(sfRenderWindow *window, struct game_s *game, sfEvent *event);
    void draw_pixel(sfRenderWindow *window, struct game_s *game);

// Program/game.c
    struct game_s *init_game(void);
    void display_game(sfRenderWindow *window, struct game_s *game);

// Program/files/*.c
    sfImage *load_image(void);

#endif /* !HEADER_H_ */
