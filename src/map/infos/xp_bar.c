/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** xp
*/

#include "../../../include/map.h"
#include "../../../include/main.h"
#include "../../../include/ui.h"

static sfSprite *create_xp_bar_sprite(char *path)
{
    sfTexture *texture = sfTexture_createFromFile(path, NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);

    sfVector2f scale = {5, 5};
    sfSprite_setScale(sprite, scale);

    return (sprite);
}

xp_bar *init_xp_bar(void)
{
    xp_bar *xp_bar = malloc(sizeof(*xp_bar));

    xp_bar->xp_bar_sprite0 = create_xp_bar_sprite(XP_BAR_0_PATH);
    xp_bar->xp_bar_sprite1 = create_xp_bar_sprite(XP_BAR_1_PATH);
    xp_bar->xp_bar_sprite2 = create_xp_bar_sprite(XP_BAR_2_PATH);
    xp_bar->xp_bar_sprite3 = create_xp_bar_sprite(XP_BAR_3_PATH);
    xp_bar->xp_bar_sprite4 = create_xp_bar_sprite(XP_BAR_4_PATH);

    return xp_bar;
}

static void high_xp_switch(sfRenderWindow *window,
xp_bar *xp_bar, player *player, int level)
{
    switch (level) {
        case (3):
            sfSprite_setPosition(xp_bar->xp_bar_sprite3, xp_bar->xp_bar_pos);
            sfRenderWindow_drawSprite(window, xp_bar->xp_bar_sprite3, NULL);
            break;
        case (4):
            sfSprite_setPosition(xp_bar->xp_bar_sprite4, xp_bar->xp_bar_pos);
            sfRenderWindow_drawSprite(window, xp_bar->xp_bar_sprite4, NULL);
            break;
    }
}

static void low_xp_switch(sfRenderWindow *window,
xp_bar *xp_bar, player *player, int level)
{
    switch (level) {
        case (0):
            sfSprite_setPosition(xp_bar->xp_bar_sprite0, xp_bar->xp_bar_pos);
            sfRenderWindow_drawSprite(window, xp_bar->xp_bar_sprite0, NULL);
        case (1):
            sfSprite_setPosition(xp_bar->xp_bar_sprite1, xp_bar->xp_bar_pos);
            sfRenderWindow_drawSprite(window, xp_bar->xp_bar_sprite1, NULL);
            break;
        case (2):
            sfSprite_setPosition(xp_bar->xp_bar_sprite2, xp_bar->xp_bar_pos);
            sfRenderWindow_drawSprite(window, xp_bar->xp_bar_sprite2, NULL);
            break;
    }
}

void display_xp_bar(sfRenderWindow *window, player *player, xp_bar *xp_bar)
{
    float xp_percent = (float) player->xp / (float) player->xp_max;
    int level = (int)(xp_percent * 5);
    (level > 4) ? (level = 4) : 0;

    if (level > 2)
        high_xp_switch(window, xp_bar, player, level);
    else
        low_xp_switch(window, xp_bar, player, level);
}
