/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** game
*/

#ifndef GAME_H_
    #define GAME_H_
    #pragma once

    #include <SFML/Graphics.h>

// Structures :
    struct game_s {
        struct map_s *map;
        sfBool mouse_pressed;
    };

// Fonctions:
    struct game_s *init_game(void);

#endif /* !GAME_H_ */
