/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** destroy_player
*/

#include "../../include/main.h"
#include "../../include/destroy.h"

void destroy_item(item *item)
{
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
    free(inventory);
}

void destroy_player(player *player)
{
    sfSprite_destroy(player->sprite);
    destroy_inventory(player->inventory);
    free(player);
}
