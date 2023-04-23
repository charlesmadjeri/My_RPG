/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** battle
*/

#include "../../include/main.h"
#include "../../include/lib.h"
#include "../../include/battle.h"
#include <SFML/Config.h>

battle *init_battle(void)
{
    battle *battle = malloc(sizeof(*battle));

    battle->texture = sfTexture_createFromFile(BG_PATH, NULL);
    battle->background = sfSprite_create();
    sfSprite_setTexture(battle->background, battle->texture, sfFalse);
    battle->special_attack = 0;
    battle->help_sprite = sfSprite_create();
    battle->help_texture = sfTexture_createFromFile(HELP_PATH, NULL);
    sfSprite_setTexture(battle->help_sprite, battle->help_texture, sfFalse);

    return battle;
}

void init_ennemy(battle *battle)
{
    if (battle->ennemy_type == MONSTER) {
        battle->ennemy_attack = MONSTER_ATK;
        battle->ennemy_hp = MONSTER_HP;
        battle->ennemy_xp = MONSTER_XP;
    } if (battle->ennemy_type == MINOTAURE) {
        battle->ennemy_attack = MINOTAURE_ATK;
        battle->ennemy_hp = MINOTAURE_HP;
        battle->ennemy_xp = MINOTAURE_XP;
    } if (battle->ennemy_type == CYCLOPE) {
        battle->ennemy_attack = CYCLOPE_ATK;
        battle->ennemy_hp = CYCLOPE_HP;
        battle->ennemy_xp = CYCLOPE_XP;
    }
}

void display_battle(sfRenderWindow *window, game *game)
{
    sfRenderWindow_drawSprite(window, game->battle->background, NULL);
    if (game->battle->ennemy_hp < 0) {
        game->player->xp += game->battle->ennemy_xp;
        game->state->current_state = MAP;
        game->state->previous_state = SPLASH;
    }
    if (game->player->health < 0) {
        game->player->health = game->player->max_health;
        game->state->current_state = MAP;
        game->state->previous_state = SPLASH;
    }
    if (game->battle->disp_help == sfTrue)
        sfRenderWindow_drawSprite(window, game->battle->help_sprite, NULL);
}
