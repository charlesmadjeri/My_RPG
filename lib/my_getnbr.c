/*
** EPITECH PROJECT, 2022
** Epitech
** File description:
** my_getnbr
*/

#include "../include/lib.h"
#include <limits.h>

int build_nbr(const char *str, int *valeur)
{
    char c;

    for (long val = 0; *str != '\0'; str++) {
        c = *str;
        if (c < '0' || c > '9')
            return 84;
        val = (*valeur * 10) + (*str - '0');
        if (val > INT_MAX)
            return 84;
        *valeur = (int) val;
    }
    return 0;
}

int my_getnbr(const char *str, int *nbr)
{
    int status = 0;
    int status1 = 0;
    int valeur = 0;
    *nbr = 1;

    switch (*str++) {
    case '\0':
        return 84;
    case '-':
        *nbr = -1;
        break;
    case '+':
        break;
    default:
        --str;
    }
    status1 = build_nbr(str, &valeur);
    *nbr *= valeur;
    return (status > status1 ? status : status1);
}
/*
bool build_nbr(const char *str, int *valeur)
{
    char c;

    for (long val = 0; *str != '\0'; str++) {
        c = *str;
        if (c < '0' || c > '9')
            return false;
        val = (*valeur * 10) + (*str - '0');
        if (val > INT_MAX)
            return false;
        *valeur = (int) val;
    }
    return true;
}

bool my_getnbr(const char *str, int *nbr)
{
    int valeur = 0;

    *nbr = 1;
    switch (*str++) {
    case '\0':
        return false;
    case '-':
        *nbr = -1;
        break;
    case '+':
        break;
    default:
        --str;
    }
    if (!build_nbr(str, &valeur))
        return false;
    *nbr *= valeur;
    return true;
}*/
