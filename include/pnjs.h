/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** pnjs
*/

#ifndef PNJS_H_
    #define PNJS_H_
    #pragma once

// Structures :
    typedef struct pnjs {
        char name[64];
        char dialog[256];
    } pnjs_t;

// Fonctions:
    pnjs_t *init_pnjs(void);
    void destroy_pnjs(pnjs_t *pnjs);

#endif /* !PNJS_H_ */
