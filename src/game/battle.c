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
    battle->pos_bar.x = (sfView_getCenter(view).x + 350);
    battle->pos_bar.y = (sfView_getCenter(view).y - 375);
    sfSprite_setPosition(battle->ennemy_bar, battle->pos_bar);
}

static void display_ennemy_bar(sfRenderWindow *window, battle *battle)
{
    float ratio = (battle->ennemy_hp * 100) / (battle->ennemy_max_hp);
    if (ratio >= 80)
        sfSprite_setTexture(battle->ennemy_bar, battle->bar_ennemy_4, sfFalse);
    if (ratio >= 60 && ratio < 80)
        sfSprite_setTexture(battle->ennemy_bar, battle->bar_ennemy_3, sfFalse);
    if (ratio >= 40 && ratio < 60)
        sfSprite_setTexture(battle->ennemy_bar, battle->bar_ennemy_2, sfFalse);
    if (ratio >= 20 && ratio < 40) 
        sfSprite_setTexture(battle->ennemy_bar, battle->bar_ennemy_1, sfFalse);
    if (ratio < 20)
        sfSprite_setTexture(battle->ennemy_bar, battle->bar_ennemy_0, sfFalse);
    sfRenderWindow_drawSprite(window, battle->ennemy_bar, NULL);
}

battle *init_battle(void)
{
    sfIntRect area; battle *battle = malloc(sizeof(*battle));
    area.height = 77; area.width = 77; area.left = 231; area.top = 160;
    battle->texture = sfTexture_createFromFile(BG_PATH, NULL);
    battle->background = sfSprite_create(); battle->player = sfSprite_create();
    battle->text_player = sfTexture_createFromFile(PL_PATH, &area);
    battle->ennemy_sprite = sfSprite_create();
    battle->help_sprite = sfSprite_create();
    battle->cyclope = sfTexture_createFromFile(C_PATH, NULL);
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
    return battle;
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
