/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** event
*/

#ifndef EVENT_H_
    #define EVENT_H_
    #include <SFML/Graphics.h>
    #include "data.h"
    #pragma once

// Fonctions:
    state *init_state(void);
    void analyse_event(sfRenderWindow *window,
    sfEvent *event, game *game);

#endif /* !EVENT_H_ */
