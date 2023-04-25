/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** destroy_battle
*/

#include "../../include/main.h"
#include "../../include/destroy.h"
#include <SFML/Graphics/Sprite.h>

void destroy_battle(battle* battle)
{
    sfSprite_destroy(battle->background);
    sfSprite_destroy(battle->player);
    sfSprite_destroy(battle->ennemy_sprite);
    sfSprite_destroy(battle->help_sprite);
    sfSprite_destroy(battle->ennemy_bar);
    sfTexture_destroy(battle->text_player);
    sfTexture_destroy(battle->texture);
    sfTexture_destroy(battle->cyclope);
    sfTexture_destroy(battle->mino);
    sfTexture_destroy(battle->monst);
    sfTexture_destroy(battle->help_texture);
    sfTexture_destroy(battle->bar_ennemy_0);
    sfTexture_destroy(battle->bar_ennemy_1);
    sfTexture_destroy(battle->bar_ennemy_2);
    sfTexture_destroy(battle->bar_ennemy_3);
    sfTexture_destroy(battle->bar_ennemy_4);
    free(battle);
}

void destroy_monster(monster *monster)
{
    sfSprite_destroy(monster->sprite);
    free(monster);
}
