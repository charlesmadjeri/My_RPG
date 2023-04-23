/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** destroy
*/

#include "../../include/main.h"
#include "../../include/destroy.h"
#include "../../include/data.h"
#include <SFML/Graphics/Sprite.h>

void destroy_clocks(clocks *clocks)
{
    sfClock_destroy(clocks->rain_clock);
    sfClock_destroy(clocks->cloud_clock);
    sfClock_destroy(clocks->athena);
    sfClock_destroy(clocks->minotaure);
    sfClock_destroy(clocks->player);
    sfClock_destroy(clocks->pnj);
    sfClock_destroy(clocks->view);
    free(clocks);
}

void destroy_athena(athena *athena)
{
    sfTexture_destroy(athena->message);
    sfSprite_destroy(athena->sprite);
    free(athena);
}

void destroy_minotaure(minotaure *minotaure)
{
    sfTexture_destroy(minotaure->message);
    sfSprite_destroy(minotaure->sprite);
    free(minotaure);
}

void destroy_all(game *game)
{
    destroy_menus(game);
    destroy_map(game->map);
    destroy_clocks(game->clocks);
    destroy_battle(game->battle);
    sfMusic_destroy(game->music);
    free(game->state);
    free(game);
}
