/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** destroy_battle
*/

#include "../../include/main.h"
#include "../../include/destroy.h"
#include <SFML/Graphics/Sprite.h>

void destroy_battle(battle *battle)
{
    sfSprite_destroy(battle->ennemy_sprite);
    sfTexture_destroy(battle->cyclope);
    sfSprite_destroy(battle->player);
    sfTexture_destroy(battle->text_player);
    sfSprite_destroy(battle->background);
    sfTexture_destroy(battle->texture);
    free(battle);
}

void destroy_monster(monster *monster)
{
    sfSprite_destroy(monster->sprite);
    free(monster);
}
