/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** destroy_minautore
*/

#include "../../include/main.h"
#include "../../include/destroy.h"
#include "../../include/data.h"

void destroy_minotaure(minotaure *minotaure)
{
    sfTexture_destroy(minotaure->texture);
    sfSprite_destroy(minotaure->sprite);
    free(minotaure);
}
