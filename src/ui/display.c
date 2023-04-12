/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** display
*/

#include "../../include/main.h"
#include "../../include/game.h"

void display(sfRenderWindow *window, game *game)
{
        display_player(window, game->player);
    return;
}
