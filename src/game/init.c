/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** init
*/

#include "../../include/main.h"
#include "../../include/lib.h"
#include "../../include/events.h"
#include "../../include/game.h"

state *init_state(void)
{
    state *state = malloc(sizeof(*state));

    state->current_state = SPLASH;
    state->previous_state = NONE;

    return state;
}
