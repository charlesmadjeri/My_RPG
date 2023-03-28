/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** main
*/

#include "../include/rpg_main.h"

void disp_help(char *argv1)
{
    if (argv1[0] == '-' && argv1[1] == 'h') {
        my_putstr("\nUsage:\t./my_rpg\n\nDescription:");
        my_putstr("\n\tWelcume Role playing gaymer !\n\n");
    }
}

int paint(void)
{
    sfEvent event;
    sfRenderWindow *window = init_window();
    struct s_gui_menu_bar *menu_bar = init_menu_bar();
    struct game_s *game = init_game();
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        while (sfRenderWindow_pollEvent(window, &event))
            analyse_event(window, &event, game, menu_bar);
        display_game(window, game);
        draw_menu_bar(window, menu_bar);
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    return 0;
}

int main(int argc, char **argv)
{
    if (argc > 1) {
        disp_help(argv[1]);
        return EXIT_SUCCESS;
    } else {
        int status = paint();
        if (status == 1)
            return EXIT_FAILURE;
        else
            return EXIT_SUCCESS;
    }
}
