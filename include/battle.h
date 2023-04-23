/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** battle
*/

#ifndef BATTLE_H_
    #define BATTLE_H_
    #include <SFML/Graphics.h>
    #include "data.h"
    #include "destroy.h"
    #pragma once
    #define BG_PATH "ressources/battle/bg.png"
    #define C_PATH "ressources/sprites/cyclope.png"
    #define PL_PATH "ressources/sprites/SpriteHero.png"
    #define MINOTAURE_T 1
    #define CYCLOPE_T 2
    #define MONSTER_T 0
    #define MINOTAURE_HP 200
    #define CYCLOPE_HP 250
    #define MONSTER_HP 75
    #define MINOTAURE_ATK 40
    #define CYCLOPE_ATK 55
    #define MONSTER_ATK 20
    #define MINOTAURE_XP 90
    #define CYCLOPE_XP 120
    #define MONSTER_XP 50

// Functions :
    battle *init_battle(void);
    void init_ennemy(battle *battle);
    void display_battle(sfRenderWindow *window, game *game);
#endif /* !BATTLE_H_ */
