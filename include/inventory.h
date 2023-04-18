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

// Fonctions:
    inventory *init_inventory(char **config_buf);
    items *init_items(char **config_buf);
    item *init_item(char **config_buf, char *item_name);
    void add_item(inventory *inventory, char *name);
    void remove_item(inventory *inventory, char *name);

#endif /* !INVENTORY_H_ */
