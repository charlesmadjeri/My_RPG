/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** init
*/

#include "../../include/main.h"

char **parse_config_file(void)
{
    ssize_t config_size = 0;
    char *config_buf = NULL;

    int fd_config_file = open(CONFIG_PATH, O_RDONLY);
    read(fd_config_file, config_buf, config_size);
    char **config_arr = my_str_to_word_array(config_buf);

    return config_arr;
}

game *init_game(void)
{
    game *game = malloc(sizeof(*game));
    char **config_buf = NULL; //parse_config_file();
    game->map = init_map();
    game->player = init_player(config_buf);
    game->clock = sfClock_create();
    game->pnjs = init_pnjs();
    game->num_pnjs = 0;
    return game;
}

