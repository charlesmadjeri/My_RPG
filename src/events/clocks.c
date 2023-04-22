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
    clocks *clocks = malloc(sizeof(*clocks));

    clocks->cloud_clock = sfClock_create();
    clocks->rain_clock = sfClock_create();
    clocks->pnj = sfClock_create();

    return clocks;
}
