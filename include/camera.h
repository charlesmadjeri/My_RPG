/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-maxence.guy
** File description:
** camera
*/

#ifndef CAMERA_H_
    #define CAMERA_H_
    #include <SFML/Graphics.h>
    #pragma once

// Structures :
    typedef struct camera {
        sfView *view;
        sfVector2f position;
        sfVector2f size;
    } camera_t;

// Fonctions:
    camera_t *init_camera(void);
    void move_camera(camera_t *camera, sfVector2f position);
    void zoom_camera(camera_t *camera, float zoom);
    void destroy_camera(camera_t *camera);

#endif /* !CAMERA_H_ */
