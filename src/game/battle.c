/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** battle
*/

#include "../../include/main.h"
#include "../../include/lib.h"
#include "../../include/battle.h"

void battle_event(sfRenderWindow *window, sfEvent *game_event, battle *battle)
{
    if (game_event->type == sfEvtKeyPressed) {
        my_putstr("HIT");
        if (sfKeyboard_isKeyPressed(sfKeyA) == sfTrue) {
            battle->ennemy_hp -= 10;
        }
    }
}

battle *init_battle(void)
{
    battle *battle = malloc(sizeof(*battle));
    battle->texture = sfTexture_createFromFile(BG_PATH, NULL);
    battle->background = sfSprite_create();
    sfSprite_setTexture(battle->background, battle->texture, sfFalse);
    battle->ennemy_hp = 100;
    battle->player_hp = 150;
    return battle;
}

void display_battle(sfRenderWindow *window, battle *battle)
{
    sfRenderWindow_drawSprite(window, battle->background, NULL);
    // Just draw all the battle sprites from back to front
}
