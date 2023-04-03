/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** map
*/

#ifndef MAP_H_
    #define MAP_H_
    #pragma once

    #include <SFML/Graphics.h>

// Structures :
    struct map_s{
        sfImage *image;
        sfSprite *sprite;
        sfTexture *texture;
    };

#endif /* !MAP_H_ */
