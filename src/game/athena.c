/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-maxence.guy
** File description:
** pnjs
*/

#include "../../include/main.h"
#include "../../include/athena.h"
#include "../../include/data.h"
#include "../../include/player.h"

athena *init_athena(void)
{
    athena *athena = malloc(sizeof(*athena));
    sfIntRect rect = {0, 462, 77, 77};
    athena->pos = (sfVector2f) {1240, 2440};
    athena->sprite = sfSprite_create();
    athena->area = rect;
    athena->stat = 'L';
    athena->stat_num = 1;
    athena->texture = sfTexture_createFromFile(ATHENA_SPRITE_PATH,
    NULL);
    sfSprite_setTexture(athena->sprite, athena->texture, sfTrue);
    sfSprite_setPosition(athena->sprite, athena->pos);
    sfSprite_setTextureRect(athena->sprite, athena->area);
    return athena;
}

void athena_move(game *game)
{
    sfTime time = sfClock_getElapsedTime(game->clocks->athena);
    float sec = sfTime_asSeconds(time);
    if (sec > 0.2) {
        sfIntRect rect = sfSprite_getTextureRect(game->athena->sprite);
        rect.left += 77;
        rect.left > 539 ? rect.left = 0 : 0;
        game->athena->area = rect;
        sfSprite_setPosition(game->athena->sprite, game->athena->pos);
        sfSprite_setTextureRect(game->athena->sprite, game->athena->area);
        sfClock_restart(game->clocks->athena);
    }
}

void display_athena(sfRenderWindow *window, game* game)
{
    athena_move(game);
    if (game->player->intersection == ATHENA && game->player->game_len == 0
    || game->player->game_len == 1) {
        game->player->game_len = 1;
        game->text->len = 2;
    }
    if (game->player->game_len == 1 && game->player->intersection != ATHENA)
        game->text->len = 0;
    sfRenderWindow_drawSprite(window, game->athena->sprite, NULL);
}
