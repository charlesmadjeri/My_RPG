/*
** EPITECH PROJECT, 2023
** Delivery
** File description:
** ennemy
*/

#include "../../include/main.h"
#include "../../include/lib.h"
#include "../../include/battle.h"
#include "../../include/map.h"
#include "../../include/ui.h"

void init_ennemy(battle *battle)
{
    if (battle->ennemy_type == MONSTER_T) {
        sfSprite_setTexture(battle->ennemy_sprite, battle->monst, sfFalse);
        battle->ennemy_attack = MONSTER_ATK;
        battle->ennemy_max_hp = MONSTER_HP;
        battle->ennemy_hp = MONSTER_HP;
        battle->ennemy_xp = MONSTER_XP;
    } if (battle->ennemy_type == MINOTAURE_T) {
        sfSprite_setTexture(battle->ennemy_sprite, battle->mino, sfFalse);
        battle->ennemy_max_hp = MINOTAURE_HP;
        battle->ennemy_attack = MINOTAURE_ATK;
        battle->ennemy_hp = MINOTAURE_HP;
        battle->ennemy_xp = MINOTAURE_XP;
    } if (battle->ennemy_type == CYCLOPE_T) {
        sfSprite_setTexture(battle->ennemy_sprite, battle->cyclope, sfFalse);
        battle->ennemy_attack = CYCLOPE_ATK;
        battle->ennemy_max_hp = CYCLOPE_HP;
        battle->ennemy_hp = CYCLOPE_HP;
        battle->ennemy_xp = CYCLOPE_XP;
    }
}