/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** init_inventory
*/

#include "../../../include/main.h"
#include "../../../include/inventory.h"

static item *init_item(char *path, char *item_name, sfVector2f scale)
{
    item *item = malloc(sizeof(*item));

    item->texture = sfTexture_createFromFile(path, NULL);
    item->sprite = sfSprite_create();
    sfSprite_setTexture(item->sprite, item->texture, sfTrue);
    item->quantity = 1;
    item->pos = (sfVector2f){0, 0};

    sfSprite_setScale(item->sprite, scale);

    return item;
}

static items *init_items(void)
{
    items *items = malloc(sizeof(*items));

    items->key = init_item(KEY_PATH, "key", (sfVector2f){1, 1});
    items->potion = init_item(POTION_PATH, "potion", (sfVector2f){1, 1});
    items->sword = init_item(SWORD_PATH, "sword", (sfVector2f){1, 1});
    items->shield = init_item(SHIELD_PATH, "shield", (sfVector2f){1, 1});

    return items;
}

inventory *init_inventory(void)
{
    inventory *inventory = malloc(sizeof(*inventory));

    inventory->background = sfSprite_create();
    inventory->texture = sfTexture_createFromFile(INVENTORY_BG_PATH, NULL);
    sfSprite_setTexture(inventory->background, inventory->texture, sfTrue);

    inventory->items = init_items();
    inventory->num_items = NUM_ITEMS;

    return inventory;
}
