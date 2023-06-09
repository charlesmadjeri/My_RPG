/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** battle_event
*/

#include "../../include/main.h"
#include "../../include/battle.h"

static void combat_event(sfRenderWindow *window, game *game,
battle *battle, sfEvent *event)
{
    if (event->key.code == sfKeyJ) {
        battle->ennemy_hp -= game->player->strength;
        battle->special_attack ++;
        game->player->health -= battle->ennemy_attack;
    } if (event->key.code == sfKeyK && battle->special_attack >= 3) {
        battle->ennemy_hp -= game->player->strength * 3;
        battle->special_attack = 0;
        game->player->health -= battle->ennemy_attack;
    } if (event->key.code == sfKeyM) {
        game->state->current_state = MAP;
        game->state->previous_state = SPLASH;
    } if (event->key.code == sfKeyL
    && game->player->inventory->items->potion->quantity > 0) {
        game->player->inventory->items->potion->quantity --;
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
        if (event->key.code == sfKeyT) {
            (game->battle->disp_help == sfFalse) ?
            (game->battle->disp_help = sfTrue) :
            (game->battle->disp_help = sfFalse);
        }
        combat_event(window, game, game->battle, event);
    }
}
