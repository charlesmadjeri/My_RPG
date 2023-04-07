/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** player
*/

#include "../../include/main.h"
#include "../../include/player.h"
#include "../../include/inventory.h"
#include <stdlib.h>

player_t *init_player(void)
{
    player_t *player = malloc(sizeof(player_t));
    inventory_t *inventory = malloc(sizeof(inventory_t));
    //player->name = "Steve\0";
    player->level = 0;
    player->experience = 0;
    player->health = 100;
    player->max_health = 100;;
    player->strength = 1;
}

void display_player(sfRenderWindow *window, player_t *player)
{
    player->hero = sfSprite_create();
    sfIntRect rect = {0, 231, 77, 77};
    player->area = rect;
    player->pos.x = 960, player->pos.y = 540;
    sfTexture *texture = sfTexture_createFromFile("ressources/textures/SpriteHero.png", NULL);
    sfSprite_setTexture(player->hero, texture, sfTrue);
    sfSprite_setTextureRect(player->hero, player->area);
    sfSprite_setPosition(player->hero, player->pos);
    sfRenderWindow_drawSprite(window, player->hero, NULL);
}

void destroy_player(player_t *player);