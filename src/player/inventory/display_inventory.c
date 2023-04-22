/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** display_inventory
*/

#include "../../../include/main.h"
#include "../../../include/inventory.h"

void display_item(sfRenderWindow *window, item *item)
{
    /* display item sprite */
}

void display_inventory(sfRenderWindow *window, inventory *inventory)
{
    display_item(window, inventory->items->key);
    display_item(window, inventory->items->potion);
    display_item(window, inventory->items->sword);
    display_item(window, inventory->items->shield);
}