/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** game
*/

#include "../../include/main.h"
#include "../../include/events.h"
#include "../../include/game.h"
#include "../../include/player.h"
#include "../../include/map.h"
#include "../../include/pnjs.h"
#include "../../include/ui.h"
#include "../../include/battle.h"

game *init_game(void)
{
    game *game = malloc(sizeof(*game));
    // game->splash = init_splash_screen();
    // game->pause_menu = init_pause_menu();
    // game->settings = init_settings();
    char **config_buf = NULL; //parse_config_file();
    game->state = init_state();
    game->map = init_map();
    game->player = init_player(config_buf);
    game->pnjs = init_pnjs();
    game->num_pnjs = 0;
    game->view = init_view();
    game->music = init_music();
    //game->battle = init_battle();
    game->clocks = init_clocks();
    return game;
}

void save_game(game *game);
void destroy_game(game *game);
