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

void display_ennemy_bar(sfRenderWindow *window, battle *battle)
{
    float ratio = (battle->ennemy_hp * 100) / (battle->ennemy_max_hp);
    if (ratio >= 80)
        sfSprite_setTexture(battle->ennemy_bar, battle->bar_ennemy_4, sfFalse);
    if (ratio >= 60 && ratio < 80)
        sfSprite_setTexture(battle->ennemy_bar, battle->bar_ennemy_3, sfFalse);
    if (ratio >= 40 && ratio < 60)
        sfSprite_setTexture(battle->ennemy_bar, battle->bar_ennemy_2, sfFalse);
    if (ratio >= 20 && ratio < 40)
        sfSprite_setTexture(battle->ennemy_bar, battle->bar_ennemy_1, sfFalse);
    if (ratio < 20)
        sfSprite_setTexture(battle->ennemy_bar, battle->bar_ennemy_0, sfFalse);
    sfRenderWindow_drawSprite(window, battle->ennemy_bar, NULL);
}

void init_ennemy(battle *battle)
{
    if (battle->ennemy_type == MONSTER_T) {
        battle->ennemy_attack = MONSTER_ATK;
        battle->ennemy_max_hp = MONSTER_HP;
        battle->ennemy_hp = MONSTER_HP;
        battle->ennemy_xp = MONSTER_XP;
    } if (battle->ennemy_type == MINOTAURE_T) {
        battle->ennemy_max_hp = MINOTAURE_HP;
        battle->ennemy_attack = MINOTAURE_ATK;
        battle->ennemy_hp = MINOTAURE_HP;
        battle->ennemy_xp = MINOTAURE_XP;
    } if (battle->ennemy_type == CYCLOPE_T) {
        battle->ennemy_attack = CYCLOPE_ATK;
        battle->ennemy_max_hp = CYCLOPE_HP;
        battle->ennemy_hp = CYCLOPE_HP;
        battle->ennemy_xp = CYCLOPE_XP;
    }
}
