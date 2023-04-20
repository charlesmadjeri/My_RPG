/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** music
*/

#include "../../include/main.h"
#include "../../include/game.h"
#include "../../include/ui.h"

sfMusic *init_music(void)
{
    sfMusic *music = sfMusic_createFromFile(MUSIC_PATH);
    sfMusic_setLoop(music, sfTrue);
    sfMusic_play(music);
    return music;
}
