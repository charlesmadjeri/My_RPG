/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** battle_event
*/

#include "../../include/main.h"
#include "../../include/battle.h"

void battle_event(sfRenderWindow *window, sfEvent *event,
game *game, battle *battle)
{
    if (event->type == sfEvtKeyPressed) {
        if (event->key.code == sfKeyEscape) {
            game->state->current_state = PAUSE;
            game->state->previous_state = BATTLE;
        } if (event->key.code == sfKeyNumpad1) {
            battle->ennemy_hp -= game->player->strength;
            battle->special_attack ++;
        } if (event->key.code == sfKeyNumpad2 && battle->special_attack >= 3) {
            battle->ennemy_hp -= game->player->strength * 3;
            battle->special_attack == 0;
        } if (event->key.code == sfKeyNumpad4) {
            game->state->current_state = MAP;
            game->state->previous_state = SPLASH;
        } if (event->key.code == sfKeyNumpad3
        && game->player->inventory->items->potion > 0) {
            game->player->inventory->items->potion --;
            game->player->health += game->player->max_health / 2;
        }
    }
}
