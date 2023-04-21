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

// Functions :
    battle *init_battle(void);
    void display_battle(sfRenderWindow *window, game *game);
#endif /* !BATTLE_H_ */
