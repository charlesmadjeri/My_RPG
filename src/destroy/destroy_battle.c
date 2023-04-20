/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** destroy_battle
*/

#include "../../include/main.h"
#include "../../include/destroy.h"

void destroy_battle(battle *battle)
{
    sfSprite_destroy(battle->background);
    sfTexture_destroy(battle->texture);
    free(battle);
}
