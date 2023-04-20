/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** destroy
*/

#ifndef DESTROY_H_
    #define DESTROY_H_
    #include <SFML/Graphics.h>
    #include "data.h"
    #pragma once

// Functions:
    void destroy_all(game *game);
    void destroy_battle(battle *battle);
    void destroy_map(map *map);
    void destroy_menus(game *game);
    void destroy_player(player *player);

#endif /* !DESTROY_H_ */
