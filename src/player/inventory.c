/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** inventory
*/

#include "../../include/main.h"

inventory *init_inventory(char **config_buf)
{
    inventory *inventory = malloc(sizeof(*inventory));

    inventory->items = init_items(config_buf);
    inventory->num_items = NUM_ITEMS;
    return inventory;
}

items *init_items(char **config_buf)
{
    items *items = malloc(sizeof(*items));

    items->key = init_item(config_buf);
    items->potion = init_item(config_buf);
    items->sword = init_item(config_buf);
    items->shield = init_item(config_buf);
    return items;
}

item *init_item(char **config_buf)
{
    item *item = malloc(sizeof(*item));
    /* use getenv fork to get key values config...
    item->name = get_item_name(config_buf);
    item->description = get_item_description(config_buf);
    item->type = get_item_type(config_buf);
    item->value = get_item_value(config_buf); */
    return item;
}
