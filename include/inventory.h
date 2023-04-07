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
    typedef struct item {
        sfBool is_consumable;
        int quantity;
        int health_factor;
        int strength_factor;
        int shield_factor;
    } item_t;

    typedef struct items {
        struct item *sword;
        struct item *shield;
        struct item *potion;
        struct item *key;
    } items_t;

    typedef struct inventory {
        items_t *items;
        int num_items;
    } inventory_t;

// Fonctions:
    inventory_t *init_inventory(char **config_buf);
    items_t *init_items(char **config_buf);
    item_t *init_item(char **config_buf);
    void add_item(inventory_t *inventory, char *name);
    void remove_item(inventory_t *inventory, char *name);

#endif /* !INVENTORY_H_ */
