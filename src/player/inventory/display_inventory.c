/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** display_inventory
*/

#include "../../../include/main.h"
#include "../../../include/inventory.h"
#include "../../../include/map.h"
#include "../../../include/ui.h"
#include "../../../include/player.h"
#include <SFML/Graphics/Rect.h>
#include <SFML/Graphics/Sprite.h>

void display_background(sfRenderWindow *window, inventory *inventory)
{
    sfSprite_setPosition(inventory->background, (sfVector2f){0, 0});
    sfRenderWindow_drawSprite(window, inventory->background, NULL);
}

void display_item(sfRenderWindow *window, item *item, sfVector2f pos)
{
    sfSprite_setPosition(item->sprite, pos);
    sfRenderWindow_drawSprite(window, item->sprite, NULL);
}

void display_items(sfRenderWindow *window, inventory *inventory)
{
    if (inventory->items->sword->quantity > 0) {
        sfSprite_setScale(inventory->items->sword->sprite, (sfVector2f){4, 4});
        display_item(window, inventory->items->sword, (sfVector2f){820, 150});
    }
    if (inventory->items->shield->quantity > 0) {
        sfSprite_setScale(inventory->items->shield->sprite, (sfVector2f){3, 3});
        display_item(window, inventory->items->shield, (sfVector2f){1100, 140});
    }
    if (inventory->items->potion->quantity > 0) {
        sfSprite_setScale(inventory->items->potion->sprite, (sfVector2f){6, 6});
        display_item(window, inventory->items->potion, (sfVector2f){750, 300});
    }
    if (inventory->items->key->quantity > 0) {
        sfSprite_setScale(inventory->items->key->sprite, (sfVector2f){3, 3});
        display_item(window, inventory->items->key, (sfVector2f){1200, 625});
    }
}

void display_inv_player(sfRenderWindow *window, player *player)
{
    sfSprite *big_player = sfSprite_copy(player->sprite);
    sfSprite_setTextureRect(big_player, player->area);
    sfSprite_setScale(big_player, (sfVector2f){5, 5});
    sfSprite_setPosition(big_player, (sfVector2f){410, 350});
    sfRenderWindow_drawSprite(window, big_player, NULL);
}

void display_inventory(sfRenderWindow *window, game *game, sfView *view)
{
    count_items(game->player->inventory);
    display_background(window, game->player->inventory);
    set_view_to_center(window, game->player->inventory->background, view);
    display_items(window, game->player->inventory);
    display_inv_player(window, game->player);
}
