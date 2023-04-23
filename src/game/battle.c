/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** battle
*/

#include "../../include/main.h"
#include "../../include/lib.h"
#include "../../include/battle.h"
#include "../../include/map.h"
#include "../../include/ui.h"

static void get_battle_pos(sfView *view, battle *battle)
{
    battle->pos_ennemy.x = (sfView_getCenter(view).x + 300);
    battle->pos_ennemy.y = (sfView_getCenter(view).y - 200);
    sfSprite_setPosition(battle->ennemy_sprite, battle->pos_ennemy);
    battle->pos_player.x = (sfView_getCenter(view).x + - 300);
    battle->pos_player.y = (sfView_getCenter(view).y + 200);
    sfSprite_setPosition(battle->player, battle->pos_player);
}

battle *init_battle(void)
{
    sfIntRect area;
    area.height = 77; area.width = 77; area.left = 231; area.top = 160;
    battle *battle = malloc(sizeof(*battle));
    battle->texture = sfTexture_createFromFile(BG_PATH, NULL);
    battle->background = sfSprite_create();
    battle->player = sfSprite_create();
    battle->text_player = sfTexture_createFromFile(PL_PATH, &area);
    battle->ennemy_sprite = sfSprite_create();
    battle->cyclope = sfTexture_createFromFile(C_PATH, NULL);
    sfSprite_setTexture(battle->player, battle->text_player, sfFalse);
    sfSprite_setTexture(battle->background, battle->texture, sfFalse);
    battle->special_attack = 0;
    return battle;
}

void init_ennemy(battle *battle)
{
    if (battle->ennemy_type == MONSTER_T) {
        battle->ennemy_attack = MONSTER_ATK;
        battle->ennemy_hp = MONSTER_HP;
        battle->ennemy_xp = MONSTER_XP;
    } if (battle->ennemy_type == MINOTAURE_T) {
        battle->ennemy_attack = MINOTAURE_ATK;
        battle->ennemy_hp = MINOTAURE_HP;
        battle->ennemy_xp = MINOTAURE_XP;
    } if (battle->ennemy_type == CYCLOPE_T) {
        sfSprite_setTexture(battle->ennemy_sprite, battle->cyclope, sfFalse);
        battle->ennemy_attack = CYCLOPE_ATK;
        battle->ennemy_hp = CYCLOPE_HP;
        battle->ennemy_xp = CYCLOPE_XP;
    }
}

void display_battle(sfRenderWindow *window, game *game)
{
    set_view_to_center(window, game->battle->background, game->view);
    get_battle_pos(game->view, game->battle);
    sfRenderWindow_drawSprite(window, game->battle->background, NULL);
    sfRenderWindow_drawSprite(window, game->battle->ennemy_sprite, NULL);
    sfRenderWindow_drawSprite(window, game->battle->player, NULL);
    display_infos(window, game);
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
}
