/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** inventory
*/

#ifndef INVENTORY_H_
    #define INVENTORY_H_
    #pragma once

    typedef struct item {
        char name[64];
        int quantity;
    } item_t;

    typedef struct inventory {
        item_t items[32];
        int num_items;
    } inventory_t;

#endif /* !INVENTORY_H_ */
