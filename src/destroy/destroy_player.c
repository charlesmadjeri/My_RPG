/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** destroy_player
*/

#include "../../include/main.h"
#include "../../include/destroy.h"
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Text.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/System/Clock.h>

void destroy_item(item *item)
{
    sfTexture_destroy(item->texture);
    sfSprite_destroy(item->sprite);
    free(item);
}

void destroy_items(items *items)
{
    destroy_item(items->sword);
    destroy_item(items->shield);
    destroy_item(items->potion);
    destroy_item(items->key);
    free(items);
}

void destroy_inventory(inventory *inventory)
{
    destroy_items(inventory->items);
    sfSprite_destroy(inventory->background);
    sfTexture_destroy(inventory->texture);
    free(inventory);
}

void destroy_player(player *player)
{
    sfSprite_destroy(player->sprite);
    sfTexture_destroy(player->texture);
    destroy_inventory(player->inventory);
    free(player);
}
