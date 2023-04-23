/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** destroy_text
*/

#include "../../include/main.h"
#include "../../include/destroy.h"

void destroy_text(text *text)
{
    sfSprite_destroy(text->sprite1);

    free(text);
}
