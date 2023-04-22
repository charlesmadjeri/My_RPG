/*
** EPITECH PROJECT, 2023
** Delivery
** File description:
** special_bar
*/

#include "../../../include/main.h"
#include "../../../include/map.h"

static sfSprite *create_spell_sprite(char *path)
{
    sfTexture *texture = sfTexture_createFromFile(path, NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);

    sfVector2f scale = {4, 4};
    sfSprite_setScale(sprite, scale);

    return sprite;
}

spell_bar *init_spell_bar(void)
{
    spell_bar *spell_bar = malloc(sizeof(*spell_bar));

    spell_bar->sprite0 = create_spell_sprite(SPELL_BAR_0_PATH);
    spell_bar->sprite1 = create_spell_sprite(SPELL_BAR_1_PATH);
    spell_bar->sprite2 = create_spell_sprite(SPELL_BAR_2_PATH);
    spell_bar->sprite3 = create_spell_sprite(SPELL_BAR_3_PATH);
    spell_bar->pos = (sfVector2f){0, 0};

    return spell_bar;
}

void display_spell_bar(sfRenderWindow *window, battle *battle,
spell_bar *spell_bar)
{
    switch (battle->special_attack) {
        case 0: sfSprite_setPosition(spell_bar->sprite0, spell_bar->pos);
            sfRenderWindow_drawSprite(window, spell_bar->sprite0, NULL);
            break;
        case 1: sfSprite_setPosition(spell_bar->sprite1, spell_bar->pos);
            sfRenderWindow_drawSprite(window, spell_bar->sprite1, NULL);
            break;
        case 2: sfSprite_setPosition(spell_bar->sprite2, spell_bar->pos);
            sfRenderWindow_drawSprite(window, spell_bar->sprite2, NULL);
            break;
        case 3: sfSprite_setPosition(spell_bar->sprite3, spell_bar->pos);
            sfRenderWindow_drawSprite(window, spell_bar->sprite3, NULL);
            break;
    }
}
