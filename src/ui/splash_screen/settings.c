/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-maxence.guy
** File description:
** settings
*/

#include "../../../include/main.h"

settings *init_settings(sfVector2f position, sfRenderWindow *window)
{
    sfSprite *music = sfSprite_create();
    sfTexture *texture_music = sfTexture_createFromFile("ressources/textures/music.png", NULL);
    sfSprite *sound = sfSprite_create();
    sfTexture *texture_sound = sfTexture_createFromFile("ressources/textures/sound.png", NULL);
    sfSprite *resolutions = sfSprite_create();
    sfTexture *texture_resolutions = sfTexture_createFromFile("ressources/textures/resolutions.png", NULL);
    sfVector2f pos_music = {(position.x / 2)- 64, position.y / 1.9};
    sfVector2f pos_sound = {(position.x / 2)- 64, position.y / 1.9};
    sfVector2f pos_resolutions = {(position.x / 2)- 64, position.y / 1.9};
    sfSprite_setPosition(music, pos_music);
    sfSprite_setPosition(sound, pos_sound);
    sfSprite_setPosition(resolutions, pos_resolutions);
    sfSprite_setTexture(music, texture_music, sfTrue);
    sfSprite_setTexture(sound, texture_sound, sfTrue);
    sfSprite_setTexture(resolutions, texture_resolutions, sfTrue);
    sfRenderWindow_drawSprite(window, music, NULL);
    sfRenderWindow_drawSprite(window, sound, NULL);
    sfRenderWindow_drawSprite(window, resolutions, NULL);

}

void click_on_it(sfRenderWindow *window, sfMouseButtonEvent event)
{
    sfVector2f music_button = {50, 50};
    if (event.x >= music_button.x && event.x <= music_button.x + 50 &&
    event.y >= music_button.y && event.y <= music_button.y + 50) {
        handle_music(window);
    }
    sfVector2f sound_button = {50, 50};
    if (event.x >= sound_button.x && event.x <= sound_button.x + 50 &&
    event.y >= sound_button.y && event.y <= sound_button.y + 50) {
        handle_sound(window);
    }
    sfVector2f res_button = {50, 50};
    if (event.x >= res_button.x && event.x <= res_button.x + 50 &&
    event.y >= res_button.y && event.y <= res_button.y + 50) {
        set_resolutions(window);
    }
}

void save_settings(settings *settings);
