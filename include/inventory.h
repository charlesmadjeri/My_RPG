/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** inventory
*/

#ifndef INVENTORY_H_
    #define INVENTORY_H_
    #include <SFML/Graphics.h>
    #pragma once

// Macros:
    #define NUM_ITEMS 4
    #define MAX_ITEMS 10

// Structures :
    typedef struct item_t {
        sfBool is_consumable;
        int quantity;
        int health_factor;
        int strength_factor;
        int shield_factor;
    } item;

    typedef struct items_t {
        item *sword;
        item *shield;
        item *potion;
        item *key;
    } items;

    typedef struct inventory_t {
        items *items;
        int num_items;
    } inventory;

// Fonctions:
    inventory *init_inventory(char **config_buf);
    items *init_items(char **config_buf);
    item *init_item(char **config_buf, char *item_name);
    void add_item(inventory *inventory, char *name);
    void remove_item(inventory *inventory, char *name);

#endif /* !INVENTORY_H_ */
