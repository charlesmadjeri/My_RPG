/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** battle
*/

#include "../../include/main.h"
#include "../../include/lib.h"
#include "../../include/battle.h"

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

void display_battle(sfRenderWindow *window, game *game)
{
    sfRenderWindow_drawSprite(window, game->battle->background, NULL);
    if (game->battle->ennemy_hp < 0) {
        game->state->current_state = MAP;
        game->state->previous_state = SPLASH;
    }
    // Just draw all the battle sprites from back to front
}
