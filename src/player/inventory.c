/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** inventory
*/

#include "../../include/inventory.h"

inventory_t *init_inventory(void)
{
    inventory_t *inventory = malloc(sizeof(inventory_t));

    inventory->items = init_items();
    inventory->num_items = NUM_ITEMS;
    return inventory;
}

items_t *init_items(void)
{
    items_t *items = malloc(sizeof(items_t));

    items->key = init_item("key", false, 0, 0, 0, 0);
    items->potion = init_item("potion", true, 0, 20, 0, 0);
    items->sword = init_item("sword", false, 0, 0, 100, 0);
    items->shield = init_item("shield", false, 0, 0, 100, 50);
    return items;
}
