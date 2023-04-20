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
    sfText_destroy(text->text);
    sfFont_destroy(text->font);
    free(text);
}
