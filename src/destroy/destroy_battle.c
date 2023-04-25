/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** destroy_battle
*/

#include "../../include/main.h"
#include "../../include/destroy.h"
#include <SFML/Graphics/Sprite.h>

static void destroy_battle_end(battle *battle)
{
    sfSprite_destroy(battle->monst_sp);
    sfSprite_destroy(battle->mino_sp);
}

void destroy_battle(battle* battle)
{
    sfSprite_destroy(battle->background);
    sfSprite_destroy(battle->player);
    sfSprite_destroy(battle->cyclo_sp);
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
    destroy_battle_end(battle);
    free(battle);
}

void destroy_monster(monster *monster)
{
    sfSprite_destroy(monster->sprite);
    free(monster);
}
