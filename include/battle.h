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
    #pragma once

// Functions :
    battle *init_battle(void);
    void display_battle(sfRenderWindow *window, battle *battle);
    void destroy_battle(battle *battle);

#endif /* !BATTLE_H_ */
