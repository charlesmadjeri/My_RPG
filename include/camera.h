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
    typedef struct camera_t {
        sfView *view;
        sfVector2f position;
        sfVector2f size;
    } camera;

// Fonctions:
    camera *init_camera(void);
    void move_camera(camera *camera, sfVector2f position);
    void zoom_camera(camera *camera, float zoom);
    void destroy_camera(camera *camera);

#endif /* !CAMERA_H_ */
