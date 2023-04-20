/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** battle
*/

#include "../../include/battle.h"

void battle_event(sfRenderWindow *window, sfEvent *Gameevt, battle *battle)
{
    if (Gameevt->type == sfEvtKeyPressed) {
        printf("HIT");
        if (sfKeyboard_isKeyPressed == sfKeyA) {
            battle->ennemy_hp -= 10;
        }
    }
}

battle *init_battle(void)
{
    battle *battle = malloc(sizeof(battle));
    battle->texture = sfTexture_createFromFile(BG_PATH, NULL);
    battle->background = sfSprite_create();
    sfSprite_setTexture(battle->background, battle->texture, sfFalse);
    battle->ennemy_hp = 100;
    battle->player_hp = 150;
    return battle;
}

void display_battle(sfRenderWindow *window, battle *battle)
{
    sfEvent Gameevt;
    while (battle->ennemy_hp > 0) {
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, battle->background, NULL);
        sfRenderWindow_display(window);
        while (sfWindow_pollEvent(window, &Gameevt)) {
            battle_event(window, &Gameevt, battle);
        }
    }
}
