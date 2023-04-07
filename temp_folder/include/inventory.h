/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** inventory
*/

#ifndef INVENTORY_H_
    #define INVENTORY_H_
    #pragma once

// Structures :
    typedef struct item {
        char name[64];
        int quantity;
    } item_t;

    typedef struct inventory {
        item_t items[32];
        int num_items;
    } inventory_t;

// Fonctions:
    inventory_t *init_inventory(void);
    void add_item(inventory_t *inventory, char *name, int quantity);
    void remove_item(inventory_t *inventory, char *name, int quantity);

#endif /* !INVENTORY_H_ */
