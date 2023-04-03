/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** event
*/

#ifndef EVENT_H_
    #define EVENT_H_
    #pragma once

    #include <SFML/Graphics.h>
    #include "game.h"

// Fonctions:
    void analyse_event(sfRenderWindow *window,
    sfEvent *event, game_t *game);
    

#endif /* !EVENT_H_ */
