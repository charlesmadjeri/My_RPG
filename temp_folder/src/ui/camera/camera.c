/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-maxence.guy
** File description:
** camera
*/

#include "../../../include/camera.h"

camera_t *init_camera(void);
void move_camera(camera_t *camera, sfVector2f position);
void zoom_camera(camera_t *camera, float zoom);
void destroy_camera(camera_t *camera);
