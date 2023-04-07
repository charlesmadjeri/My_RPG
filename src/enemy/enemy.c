/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** enemy
*/

#include "../../include/main.h"

enemy *init_enemy(void)
{
    enemy *enemy = malloc(sizeof(*enemy));
    return enemy;
}

void destroy_enemy(enemy *enemy);
