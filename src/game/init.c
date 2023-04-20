/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** init
*/

#include "../../include/main.h"
#include "../../include/lib.h"
#include "../../include/events.h"
#include "../../include/game.h"

state *init_state(void)
{
    state *state = malloc(sizeof(*state));

    state->current_state = MAP;
    state->previous_state = SPLASH;

    return state;
}

char **parse_config_file(void)
{
    ssize_t config_size = 0;
    char *config_buf = NULL;

    int fd_config_file = open(CONFIG_PATH, O_RDONLY);
    read(fd_config_file, config_buf, config_size);
    char **config_arr = my_str_to_word_array(config_buf);

    return config_arr;
}
