/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** battle_event
*/

#include "../../include/main.h"
#include "../../include/battle.h"
#include "../../include/ui.h"
#include <SFML/Graphics/View.h>
#include <SFML/System/Vector2.h>

static void atk_animation(sfRenderWindow *window, game *game, battle *battle)
{
    sfClock *clock = sfClock_create();
    sfTime time = sfClock_getElapsedTime(clock);
    sfVector2f moko;
    while (42) {
        if (time.microseconds < 1000000) {
            time = sfClock_getElapsedTime(clock);
            moko = sfSprite_getPosition(battle->player);

            set_view_to_center(window, battle->background, game->view);
            sfVector2f view_pos = sfView_getCenter(game->view);
            battle->pos_player = (sfVector2f) {view_pos.x, view_pos.y};

            sfSprite_setPosition(battle->player, battle->pos_player);
            printf("%.1f\t%.1f\t\t\t%.1f\t%.1f\n", battle->pos_player.x, battle->pos_ennemy.y, moko.x, moko.y);
            sfRenderWindow_drawSprite(window, battle->player, NULL);
        } else {
            break;
        }
    }
}

static void combat_event(sfRenderWindow *window, game *game,
battle *battle, sfEvent *event)
{
    if (event->key.code == sfKeyJ) {
        battle->ennemy_hp -= game->player->strength;
        battle->special_attack ++;
        game->player->health -= battle->ennemy_attack;
        atk_animation(window, game, battle);
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
