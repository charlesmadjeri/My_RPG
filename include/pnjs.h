/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** pnjs
*/

#ifndef PNJS_H_
    #define PNJS_H_
    #include <SFML/Graphics.h>
    #pragma once

// Structures :
    typedef struct pnjs {
        char *name;
        char **dialog;
    } pnjs_t;

// Fonctions:
    pnjs_t *init_pnjs(void);
    void display_pnjs(sfRenderWindow *window, pnjs_t *pnjs);
    void destroy_pnjs(pnjs_t *pnjs);

#endif /* !PNJS_H_ */
