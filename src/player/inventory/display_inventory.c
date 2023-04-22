/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** display_inventory
*/

#include "../../../include/main.h"
#include "../../../include/inventory.h"
#include "../../../include/map.h"

void display_background(sfRenderWindow *window, inventory *inventory)
{
    sfVector2u window_size = sfRenderWindow_getSize(window);
    sfVector2u texture_size = sfTexture_getSize(inventory->texture);
    sfVector2u sprite_size = window_size;

    sfVector2f pos = {
        (float)(window_size.x - sprite_size.x) / 2,
        (float)(window_size.y - sprite_size.y) / 2
    };

    sfSprite_setPosition(inventory->background, pos);
    sfRenderWindow_drawSprite(window, inventory->background, NULL);
}

void display_item(sfRenderWindow *window, item *item, sfVector2f pos)
{
    sfSprite_setPosition(item->sprite, pos);
    sfRenderWindow_drawSprite(window, item->sprite, NULL);
}

void display_items(sfRenderWindow *window, inventory *inventory)
{
    sfVector2f pos = calculate_first_item_pos(inventory);

    if (inventory->items->sword->quantity > 0) {
        display_item(window, inventory->items->sword, pos);
        pos.y += sfTexture_getSize(inventory->items->sword->texture).y + 10.f;
    }
    if (inventory->items->shield->quantity > 0) {
        display_item(window, inventory->items->shield, pos);
        pos.y += sfTexture_getSize(inventory->items->shield->texture).y + 10.f;
    }
    if (inventory->items->potion->quantity > 0) {
        display_item(window, inventory->items->potion, pos);
        pos.y += sfTexture_getSize(inventory->items->potion->texture).y + 10.f;
    }
    if (inventory->items->key->quantity > 0) {
        display_item(window, inventory->items->key, pos);
        pos.y += sfTexture_getSize(inventory->items->key->texture).y + 10.f;
    }
}

void display_inventory(sfRenderWindow *window, inventory *inventory)
{
    count_items(inventory);
    display_background(window, inventory);
    display_items(window, inventory);
}
