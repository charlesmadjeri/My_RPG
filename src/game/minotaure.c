/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-maxence.guy
** File description:
** minotaure
*/

#include "../../include/main.h"
#include "../../include/minotaure.h"
#include "../../include/data.h"
#include "../../include/player.h"

minotaure *init_minotaure(void)
{
    minotaure *minotaure = malloc(sizeof(*minotaure));
    sfIntRect rect = {0, 750, 375, 375};
    minotaure->pos = (sfVector2f) {725, 1385};
    minotaure->sprite = sfSprite_create();
    minotaure->area = rect;
    minotaure->stat_num = 1;
    sfTexture *minotaure_texture = sfTexture_createFromFile(MINO_SPRITE_PATH,
    NULL);
    sfSprite_setTexture(minotaure->sprite, minotaure_texture, sfTrue);
    sfSprite_setPosition(minotaure->sprite, minotaure->pos);
    sfSprite_setTextureRect(minotaure->sprite, minotaure->area);
    return minotaure;
}

void minotaure_move(game *game)
{
    sfTime time = sfClock_getElapsedTime(game->clocks->minotaure);
    float sec = sfTime_asSeconds(time);
    if (sec > 0.2) {
        sfIntRect rect = sfSprite_getTextureRect(game->minotaure->sprite);
        rect.left += 375;
        rect.left > 1875 ? rect.left = 0 : 0;
        game->minotaure->area = rect;
        sfSprite_setPosition(game->minotaure->sprite, game->minotaure->pos);
        sfSprite_setTextureRect(game->minotaure->sprite, game->minotaure->area);
        sfClock_restart(game->clocks->minotaure);
    }
}

void display_minotaure(sfRenderWindow *window, game* game)
{
    minotaure_move(game);
    if (game->player->intersection == MINOTAURE && game->player->game_len == 2
    || game->player->game_len == 3) {
        game->player->game_len = 3;
        game->text->len = 4;
    } else if (game->player->game_len == 3 &&
    game->player->intersection != MINOTAURE) {
        game->text->len = 0;
    }
    if (game->player->game_len >= 2)
        sfRenderWindow_drawSprite(window, game->minotaure->sprite, NULL);
}

void destroy_minotaure(minotaure *minotaure);
