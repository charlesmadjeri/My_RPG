/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-maxence.guy
** File description:
** camera
*/

#include "../../../include/main.h"

camera *init_camera(void);
void move_camera(camera *camera, sfVector2f position);
void zoom_camera(camera *camera, float zoom);
void destroy_camera(camera *camera);
