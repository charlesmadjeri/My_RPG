/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** battle_event
*/

#include "../../include/main.h"
#include "../../include/battle.h"

static void combat_event(game *game, battle *battle, sfEvent *event)
{
    if (event->key.code == sfKeyNumpad1) {
        battle->ennemy_hp -= game->player->strength;
        battle->special_attack ++;
        game->player->health -= battle->ennemy_attack;
    } if (event->key.code == sfKeyNumpad2 && battle->special_attack >= 3) {
        battle->ennemy_hp -= game->player->strength * 3;
        battle->special_attack = 0;
        game->player->health -= battle->ennemy_attack;
    } if (event->key.code == sfKeyNumpad4) {
        game->state->current_state = MAP;
        game->state->previous_state = SPLASH;
    } if (event->key.code == sfKeyNumpad3
    && game->player->inventory->items->potion > 0) {
        game->player->inventory->items->potion --;
        game->player->health += game->player->max_health / 2;
        game->player->health -= battle->ennemy_attack;
    }
}

void battle_event(sfRenderWindow *window, sfEvent *event, game *game)
{
    if (event->type == sfEvtKeyPressed) {
        if (event->key.code == sfKeyEscape) {
            game->state->current_state = PAUSE;
            game->state->previous_state = BATTLE;
        }
        combat_event(game, game->battle, event);
    }
}
