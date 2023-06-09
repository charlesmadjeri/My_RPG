/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** text
*/

#include "../../include/main.h"
#include "../../include/data.h"
#include "../../include/ui.h"
#include "../../include/player.h"
#define PATH_SPRITE1 "ressources/text/text1.png"
#define PATH_SPRITE2 "ressources/text/text2.png"
#define PATH_SPRITE3 "ressources/text/text3.png"
#define PATH_SPRITE4 "ressources/text/text4.png"
#define PATH_WIN "ressources/sprites/youwin.png"

text* init_text(game* game)
{
    text* text = malloc(sizeof(*text));
    text->pos = (sfVector2f) {0, 0};
    text->len = 1;
    text->sprite1 = sfSprite_create();
    text->sprite2 = sfSprite_create();
    text->sprite3 = sfSprite_create();
    text->sprite4 = sfSprite_create();
    text->win = sfSprite_create();
    text->texture1 = sfTexture_createFromFile(PATH_SPRITE1, NULL);
    text->texture2 = sfTexture_createFromFile(PATH_SPRITE2, NULL);
    text->texture3 = sfTexture_createFromFile(PATH_SPRITE3, NULL);
    text->texture4 = sfTexture_createFromFile(PATH_SPRITE4, NULL);
    sfTexture *texture = sfTexture_createFromFile(PATH_WIN, NULL);
    sfSprite_setTexture(text->sprite1, text->texture1, sfTrue);
    sfSprite_setTexture(text->sprite2, text->texture2, sfTrue);
    sfSprite_setTexture(text->sprite3, text->texture3, sfTrue);
    sfSprite_setTexture(text->sprite4, text->texture4, sfTrue);
    sfSprite_setTexture(text->win, texture, sfTrue);
    return text;
}

void place_text(text* text, game* game, sfRenderWindow* win, sfSprite* sprite)
{
    text->pos = sfView_getCenter(game->view);
    sfSprite_setPosition(sprite,
    (sfVector2f){text->pos.x - 637, text->pos.y - 961});
    sfFloatRect rect = sfSprite_getGlobalBounds(sprite);
    sfVector2f center =
    {rect.left + rect.width / 2.f, rect.top + rect.height - 500};
    sfView_setCenter(game->view, center);
    sfRenderWindow_setView(win, game->view);
}

void display_text2(game* game, sfRenderWindow * window, text* text)
{
    if (game->player->game_len == 4) {
        place_text(text, game, window, text->win);
        sfVector2f scale = {2.0, 2.0};
        sfSprite_setScale(text->win, scale);
        sfRenderWindow_drawSprite(window, text->win, NULL);
    }
}

void display_text(game* game, sfRenderWindow *window, text* text)
{
    sfVector2f pos = sfSprite_getPosition(game->player->sprite);
    if (text->len == 1) {
        place_text(text, game, window, text->sprite1);
        sfRenderWindow_drawSprite(window, text->sprite1, NULL);
    }
    if (text->len == 2) {
        place_text(text, game, window, text->sprite2);
        sfRenderWindow_drawSprite(window, text->sprite2, NULL);
    }
    if (text->len == 3) {
        place_text(text, game, window, text->sprite3);
        sfRenderWindow_drawSprite(window, text->sprite3, NULL);
    }
    if (game->player->intersection == DOOR && game->player->game_len < 2
    && pos.x > 4450 && pos.x < 4600 && pos.y > 400 && pos.y < 550) {
        place_text(text, game, window, text->sprite4);
        sfRenderWindow_drawSprite(window, text->sprite4, NULL);
    }
    display_text2(game, window, text);
}
