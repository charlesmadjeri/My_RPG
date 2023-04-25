/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** destroy_text
*/

#include "../../include/main.h"
#include "../../include/destroy.h"

void destroy_text(text* txt)
{
    sfSprite_destroy(txt->sprite1);
    sfSprite_destroy(txt->sprite2);
    sfSprite_destroy(txt->sprite3);
    sfSprite_destroy(txt->sprite4);
    sfTexture_destroy(txt->texture1);
    sfTexture_destroy(txt->texture2);
    sfTexture_destroy(txt->texture3);
    sfTexture_destroy(txt->texture4);
    free(txt);
}
