/*
** EPITECH PROJECT, 2023
** Delivery
** File description:
** interaction
*/

#include "../../include/main.h"
#include "../../include/player.h"
#include "../../include/game.h"
#include "../../include/battle.h"
#include "../../include/events.h"
#include "../../include/ui.h"

void is_interaction(game *game)
{
    if (sfIntRect_intersects(&game->player->area, &game->pnjs->area, NULL)
    == sfTrue) {
        game->player->intersection = PNJ;
    // } if (sfIntRect_intersects(&game->player->area,&game->athena->area, NULL)
    // == sfTrue) {
        // game->player->intersection = ATHENA;
    // } if (sfIntRect_intersects(&game->player->area,
    // &game->ennemy->monster->area, NULL) == sfTrue) {
        // game->player->intersection = MONSTER;
    // } if (sfIntRect_intersects(&game->player->area,
    // &game->ennemy->minotaure->area, NULL) == sfTrue) {
        // game->player->intersection = MINOTAURE;
    // } if (sfIntRect_intersects(&game->player->area,
    // &game->ennemy->cyclope->area, NULL) == sfTrue) {
        // game->player->intersection = CYCLOPE;
    } else
        game->player->intersection = 0;
}
