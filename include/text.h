/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** text
*/

#ifndef TEXT_H_
    #define TEXT_H_
    #include <SFML/Graphics.h>
    #pragma once

// Structures :
    typedef struct text {
        sfText *text;
        sfFont *font;
        sfVector2f position;
        sfColor color;
        int size;
    } text_t;

// Functions :
    text_t *init_text(char *str, sfVector2f position, sfColor color, int size);
    void display_text(sfRenderWindow *window, text_t *text);

#endif /* !TEXT_H_ */
