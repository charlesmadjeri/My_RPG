/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** pnjs
*/

#ifndef PNJS_H_
    #define PNJS_H_
    #pragma once

    #include <SFML/Graphics.h>

// Structures :
    typedef struct pnjs {
        char name[64];
        char dialog[256];
    } pnjs_t;

// Fonctions:
    pnjs_t *init_pnjs(void);
    void display_pnjs(sfRenderWindow *window, pnjs_t *pnjs);
    void destroy_pnjs(pnjs_t *pnjs);

#endif /* !PNJS_H_ */
