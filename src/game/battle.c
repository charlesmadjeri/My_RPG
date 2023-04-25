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
#include "../../include/minotaure.h"

static void get_battle_pos(sfView *view, battle *battle)
{
    if (battle->ennemy_type == CYCLOPE_T) {
        battle->pos_cyclope.x = (sfView_getCenter(view).x + 300);
        battle->pos_cyclope.y = (sfView_getCenter(view).y - 200);
        sfSprite_setPosition(battle->ennemy_sprite, battle->pos_cyclope);
    } if (battle->ennemy_type == MINOTAURE_T) {
        battle->pos_mino.x = (sfView_getCenter(view).x + 450);
        battle->pos_mino.y = (sfView_getCenter(view).y - 50);
        sfSprite_setPosition(battle->ennemy_sprite, battle->pos_mino);
    } if (battle->ennemy_type == MONSTER_T) {
        battle->pos_cyclope.x = (sfView_getCenter(view).x + 500);
        battle->pos_cyclope.y = (sfView_getCenter(view).y + 200);
        sfSprite_setPosition(battle->ennemy_sprite, battle->pos_cyclope);
    }
    battle->pos_player.x = (sfView_getCenter(view).x - 300);
    battle->pos_player.y = (sfView_getCenter(view).y + 200);
    sfSprite_setPosition(battle->player, battle->pos_player);
    battle->pos_bar.x = (sfView_getCenter(view).x + 350);
    battle->pos_bar.y = (sfView_getCenter(view).y - 375);
    sfSprite_setPosition(battle->ennemy_bar, battle->pos_bar);
}

static battle *second_part_init(battle *battle)
{
    sfSprite_setTexture(battle->player, battle->text_player, sfFalse);
    sfSprite_setTexture(battle->background, battle->texture, sfFalse);
    battle->special_attack = 0; battle->disp_help = sfTrue;
    battle->help_texture = sfTexture_createFromFile(HELP_B_PATH, NULL);
    sfSprite_setTexture(battle->help_sprite, battle->help_texture, sfFalse);
    battle->bar_ennemy_0 = sfTexture_createFromFile(E_BAR_PATH_0, NULL);
    battle->bar_ennemy_1 = sfTexture_createFromFile(E_BAR_PATH_1, NULL);
    battle->bar_ennemy_2 = sfTexture_createFromFile(E_BAR_PATH_2, NULL);
    battle->bar_ennemy_3 = sfTexture_createFromFile(E_BAR_PATH_3, NULL);
    battle->bar_ennemy_4 = sfTexture_createFromFile(E_BAR_PATH_4, NULL);
    battle->ennemy_bar = sfSprite_create();
    sfSprite_scale(battle->ennemy_bar, (sfVector2f) {3,3});
}

battle *init_battle(void)
{
    sfIntRect area; battle *battle = malloc(sizeof(*battle));
    sfIntRect a_mino; sfIntRect a_monst;
    area.height = 77; area.width = 77; area.left = 231; area.top = 160;
    a_monst.height = 77; a_monst.width = 77; a_monst.left = 0; a_monst.top = 0;
    a_mino.height = 330; a_mino.width = 200; a_mino.left = 450;
    a_mino.top = 780;
    battle->texture = sfTexture_createFromFile(BG_PATH, NULL);
    battle->background = sfSprite_create(); battle->player = sfSprite_create();
    battle->text_player = sfTexture_createFromFile(PL_PATH, &area);
    battle->ennemy_sprite = sfSprite_create();
    battle->help_sprite = sfSprite_create();
    battle->cyclope = sfTexture_createFromFile(C_PATH, NULL);
    battle->mino = sfTexture_createFromFile(MINO_SPRITE_PATH, &a_mino);
    battle->monst = sfTexture_createFromFile(MON_PATH, &a_monst);
    second_part_init(battle);
    return battle;
}

static void win_or_lose(game *game)
{
    if (game->battle->ennemy_hp < 0) {
        game->player->xp += game->battle->ennemy_xp;
        game->state->current_state = MAP;
        game->state->previous_state = BATTLE;
        if (game->battle->ennemy_type = MONSTER_T) {
            game->player->inventory->items->potion->quantity += 20;
            game->player->inventory->items->shield->quantity ++;
        }
        if (game->battle->ennemy_type = MINOTAURE_T) {
            game->player->inventory->items->key->quantity ++;
        }
    }
    if (game->player->health < 0) {
        game->player->health = game->player->max_health;
        game->state->current_state = MAP;
        game->state->previous_state = BATTLE;
    }
}

void display_battle(sfRenderWindow *window, game *game)
{
    set_view_to_center(window, game->battle->background, game->view);
    get_battle_pos(game->view, game->battle);
    sfRenderWindow_drawSprite(window, game->battle->background, NULL);
    sfRenderWindow_drawSprite(window, game->battle->ennemy_sprite, NULL);
    sfRenderWindow_drawSprite(window, game->battle->player, NULL);
    display_ennemy_bar(window, game->battle);
    display_infos(window, game);
    display_help(window, game);
    win_or_lose(game);
}
