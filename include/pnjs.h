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
    typedef struct pnjs_t {
        char *name;
        char **dialog;
    } pnjs;

// Fonctions:
    pnjs *init_pnjs(void);
    void display_pnjs(sfRenderWindow *window, pnjs *pnjs);
    void destroy_pnjs(pnjs *pnjs);

#endif /* !PNJS_H_ */
