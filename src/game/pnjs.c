/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-maxence.guy
** File description:
** pnjs
*/

#include "../../include/main.h"

pnjs *init_pnjs(void)
{
    pnjs *pnjs = malloc(sizeof(*pnjs));
    return pnjs;
}

void destroy_pnjs(pnjs *pnjs);
