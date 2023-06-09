/*
** EPITECH PROJECT, 2023
** Delivery
** File description:
** destroy_hud
*/

#include "../../include/main.h"
#include "../../include/destroy.h"
#include <SFML/Graphics/Texture.h>

static void destroy_level_nb(level_nb *level_nb)
{
    sfSprite_destroy(level_nb->level_1_sprite);
    sfSprite_destroy(level_nb->level_2_sprite);
    sfSprite_destroy(level_nb->level_3_sprite);
    free(level_nb);
}

static void destroy_spell_bar(spell_bar *spell_bar)
{
    sfSprite_destroy(spell_bar->sprite0);
    sfSprite_destroy(spell_bar->sprite1);
    sfSprite_destroy(spell_bar->sprite2);
    sfSprite_destroy(spell_bar->sprite3);
    free(spell_bar);
}

static void destroy_xp_bar(xp_bar *xp_bar)
{
    sfSprite_destroy(xp_bar->xp_bar_sprite0);
    sfSprite_destroy(xp_bar->xp_bar_sprite1);
    sfSprite_destroy(xp_bar->xp_bar_sprite2);
    sfSprite_destroy(xp_bar->xp_bar_sprite3);
    sfSprite_destroy(xp_bar->xp_bar_sprite4);
    free(xp_bar);
}

static void destroy_life_bar(life_bar *life_bar)
{
    sfSprite_destroy(life_bar->life_bar_sprite0);
    sfSprite_destroy(life_bar->life_bar_sprite1);
    sfSprite_destroy(life_bar->life_bar_sprite2);
    sfSprite_destroy(life_bar->life_bar_sprite3);
    sfSprite_destroy(life_bar->life_bar_sprite4);
    sfSprite_destroy(life_bar->life_bar_sprite5);
    sfSprite_destroy(life_bar->life_bar_sprite6);
    free(life_bar);
}

void destroy_info(infos *infos)
{
    destroy_level_nb(infos->level_nb);
    destroy_spell_bar(infos->spell_bar);
    destroy_life_bar(infos->life_bar);
    destroy_xp_bar(infos->xp_bar);
    free(infos);
}
