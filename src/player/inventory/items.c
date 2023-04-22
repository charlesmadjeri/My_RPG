/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** items
*/

#include "../../../include/main.h"
#include "../../../include/inventory.h"
#include "../../../include/map.h"

void count_items(inventory *inventory)
{
    int num_items_to_display = 0;

    if (inventory->items->sword->quantity > 0) num_items_to_display++;
    if (inventory->items->shield->quantity > 0) num_items_to_display++;
    if (inventory->items->potion->quantity > 0) num_items_to_display++;
    if (inventory->items->key->quantity > 0) num_items_to_display++;

    inventory->num_items = num_items_to_display;
}

sfVector2f calculate_first_item_pos(inventory *inventory)
{
    sfVector2f pos = {50.f, 50.f};
    if (inventory->num_items > 2) {
        pos.y = (int)(MAP_HEIGHT_PX / 2) -
        ((sfTexture_getSize(inventory->items->sword->texture).y + 10.f)
        * (inventory->num_items - 2));
    } else {
        pos.y = (int)(MAP_HEIGHT_PX / 2) -
        ((sfTexture_getSize(inventory->items->sword->texture).y + 10.f) / 2);
    }
    return pos;
}
