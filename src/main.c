/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** main
*/

#include "../include/main.h"
#include "../include/game.h"
#include "../include/ui.h"
#include "../include/lib.h"
#include "../include/events.h"
#include "../include/destroy.h"

void disp_help(char *argv1)
{
    if (argv1[0] == '-' && argv1[1] == 'h') {
        my_putstr("\nUsage:\t./my_rpg\n\nDescription:");
        my_putstr("\n\tWelcome Role playing gamer !\n\n");
    }
}

int launch(void)
{
    sfEvent event;
    sfRenderWindow *window = init_window();
    game *game = init_game();

    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        display(window, game);
        sfRenderWindow_display(window);
        while (sfRenderWindow_pollEvent(window, &event))
            analyse_event(window, &event, game);
    }
    sfRenderWindow_close(window);
    destroy_all(game, window);
    sfRenderWindow_destroy(window);
    return 0;
}

int main(int argc, char **argv)
{
    if (argc > 1) {
        disp_help(argv[1]);
        return EXIT_SUCCESS;
    } else {
        int status = launch();
        if (status == 1)
            return 84;
        else
            return EXIT_SUCCESS;
    }
}
