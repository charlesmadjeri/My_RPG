/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** destroy
*/

#ifndef DESTROY_H_
    #define DESTROY_H_
    #include "data.h"
    #pragma once

// Functions:
    void destroy_all(game *game, sfRenderWindow *window);
    void destroy_battle(battle *battle);
    void destroy_info(infos *infos);
    void destroy_map(map *map);
    void destroy_menus(game *game);
    void destroy_player(player *player);
    void destroy_monster(monster *monster);
    void destroy_athena(athena *athena);
    void destroy_minotaure(minotaure *minotaure);
    void destroy_text(text *text);
    void destroy_pnjs(pnjs *pnjs);

#endif /* !DESTROY_H_ */
