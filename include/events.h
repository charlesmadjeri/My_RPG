/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** event
*/

#ifndef EVENT_H_
    #define EVENT_H_
    #include "data.h"
    #pragma once

// Fonctions:
    state *init_state(void);
    void analyse_event(sfRenderWindow *window,
    sfEvent *event, game *game);

    void splash_event(sfRenderWindow *window, sfEvent *event, game *game);
    void map_event(sfRenderWindow *window, sfEvent *event, game *game);
    void pause_event(sfRenderWindow *window, sfEvent *event, game *game);
    void settings_event(sfRenderWindow *window, sfEvent *event, game *game);
    void inventory_event(sfRenderWindow *window, sfEvent *event, game *game);
    void battle_event(sfRenderWindow *window, sfEvent *event, game *game);
    void is_interaction(game *game);

#endif /* !EVENT_H_ */
