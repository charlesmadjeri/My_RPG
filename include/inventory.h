/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** inventory
*/

#ifndef INVENTORY_H_
    #define INVENTORY_H_
    #include <SFML/Graphics.h>
    #include "data.h"
    #pragma once

// Macros:
    #define NUM_ITEMS 4
    #define MAX_ITEMS 10

    #define INVENTORY_BG_PATH "ressources/sprites/inventory/inventory_bg.png"
    #define KEY_PATH "ressources/sprites/inventory/key.png"
    #define POTION_PATH "ressources/sprites/inventory/potion.png"
    #define SWORD_PATH "ressources/sprites/inventory/sword.png"
    #define SHIELD_PATH "ressources/sprites/inventory/shield.png"

// Fonctions:
    inventory *init_inventory(void);
    void add_item(inventory *inventory, char *name);
    void remove_item(inventory *inventory, char *name);
    void display_inventory(sfRenderWindow *window, game *game, sfView *view);
    sfVector2f calculate_first_item_pos(inventory *inventory);
    void count_items(inventory *inventory);

#endif /* !INVENTORY_H_ */
