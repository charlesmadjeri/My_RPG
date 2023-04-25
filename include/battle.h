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
    #define MON_PATH "ressources/sprites/monster.png"
    #define C_PATH "ressources/sprites/cyclope.png"
    #define PL_PATH "ressources/sprites/SpriteHero.png"
    #define HELP_B_PATH "ressources/battle/help.png"
    #define E_BAR_PATH_0 "ressources/maps/infos/Barre_de_vie_mechant-1.png"
    #define E_BAR_PATH_1 "ressources/maps/infos/Barre_de_vie_mechant-2.png"
    #define E_BAR_PATH_2 "ressources/maps/infos/Barre_de_vie_mechant-3.png"
    #define E_BAR_PATH_3 "ressources/maps/infos/Barre_de_vie_mechant-4.png"
    #define E_BAR_PATH_4 "ressources/maps/infos/Barre_de_vie_mechant-5.png"
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
    void entering_battle(sfRenderWindow *window, game *game);
    void init_ennemy(battle *battle);
    void display_battle(sfRenderWindow *window, game *game);
    void display_ennemy_bar(sfRenderWindow *window, battle *battle);
#endif /* !BATTLE_H_ */
