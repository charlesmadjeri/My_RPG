/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** destroy_athena
*/

#include "../../include/main.h"
#include "../../include/destroy.h"
#include "../../include/data.h"

void destroy_athena(athena *athena)
{
    sfTexture_destroy(athena->texture);
    sfSprite_destroy(athena->sprite);
    free(athena);
}
