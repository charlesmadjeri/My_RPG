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

// Fonctions:
    void analyse_event(sfRenderWindow *window,
    sfEvent *event,struct game_s *game);

#endif /* !EVENT_H_ */
