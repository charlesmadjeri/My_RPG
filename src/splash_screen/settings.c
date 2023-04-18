/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-maxence.guy
** File description:
** settings
*/

#include "../../include/main.h"
#include "../../include/settings.h"

void set_textureandsprite(settings *settings)
{
    sfSprite_setPosition(settings->music, settings->pos_music);
    sfSprite_setPosition(settings->sound, settings->pos_sound);
    sfSprite_setPosition(settings->resolutions, settings->pos_resolutions);
    sfSprite_setTexture(settings->music, settings->texture_music, sfTrue);
    sfSprite_setTexture(settings->sound, settings->texture_sound, sfTrue);
    sfSprite_setTexture(settings->resolutions,
    settings->texture_resolutions, sfTrue);
}

void drawmysprite(settings *settings, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, settings->music, NULL);
    sfRenderWindow_drawSprite(window, settings->sound, NULL);
    sfRenderWindow_drawSprite(window, settings->resolutions, NULL);
}

settings *init_settings(sfVector2f position, sfRenderWindow *window)
{
    settings *settings = malloc(sizeof(*settings));
    sfSprite *music = sfSprite_create();
    sfTexture *texture_music =
    sfTexture_createFromFile("ressources/textures/music.png", NULL);
    sfSprite *sound = sfSprite_create();
    sfTexture *texture_sound =
    sfTexture_createFromFile("ressources/textures/sound.png", NULL);
    sfSprite *resolutions = sfSprite_create();
    sfTexture *texture_resolutions =
    sfTexture_createFromFile("ressources/textures/resolutions.png", NULL);
    sfVector2f pos_music = {(position.x / 2)- 64, position.y / 1.9};
    sfVector2f pos_sound = {(position.x / 2)- 64, position.y / 1.9};
    sfVector2f pos_resolutions = {(position.x / 2)- 64, position.y / 1.9};
    set_textureandsprite(settings);
    drawmysprite(settings, window);
    return settings;
}

void click_on_it(sfRenderWindow *window, sfMouseButtonEvent event)
{
    sfVector2f music_button = {50, 50};
    if (event.x >= music_button.x && event.x <= music_button.x + 50 &&
    event.y >= music_button.y && event.y <= music_button.y + 50) {
        // handle_music(window);
    }
    sfVector2f sound_button = {50, 50};
    if (event.x >= sound_button.x && event.x <= sound_button.x + 50 &&
    event.y >= sound_button.y && event.y <= sound_button.y + 50) {
        // handle_sound(window);
    }
    sfVector2f res_button = {50, 50};
    if (event.x >= res_button.x && event.x <= res_button.x + 50 &&
    event.y >= res_button.y && event.y <= res_button.y + 50) {
        // set_resolutions(window);
    }
}

void save_settings(settings *settings);
