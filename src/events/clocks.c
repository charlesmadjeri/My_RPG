/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** clocks
*/

#include "../../include/main.h"
#include "../../include/game.h"

clocks *init_clocks(void)
{
    clocks *clocks = malloc(sizeof(sfClock *) * 8);

    clocks->cloud_clock = sfClock_create();
    clocks->rain_clock = sfClock_create();
    clocks->pnj = sfClock_create();
    clocks->athena = sfClock_create();
    clocks->minotaure = sfClock_create();
    clocks->player = sfClock_create();
    clocks->view = sfClock_create();
    clocks->text = sfClock_create();
    return clocks;
}
