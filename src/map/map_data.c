/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** generate_map
*/

#include "../../include/main.h"
#include "../../include/map.h"

static textures *load_map_elements(void)
{
    textures *textures = malloc(sizeof(*textures));
    textures->grass = sfTexture_createFromFile(G_PATH, NULL);
    textures->pass = sfTexture_createFromFile(P_PATH, NULL);
    textures->road = sfTexture_createFromFile(R_PATH, NULL);
    textures->sand = sfTexture_createFromFile(SA_PATH, NULL);
    textures->dungeon_door = sfTexture_createFromFile(D_D_PATH, NULL);
    textures->mountains = sfTexture_createFromFile(M_PATH, NULL);
    textures->water = sfTexture_createFromFile(W_PATH, NULL);
    textures->steps = sfTexture_createFromFile(ST_PATH, NULL);
    textures->dead_trees = sfTexture_createFromFile(D_T_PATH, NULL);
    textures->city_wall = sfTexture_createFromFile(C_W_PATH, NULL);
    textures->house = sfTexture_createFromFile(H_PATH, NULL);
    return textures;
}

static sfTexture *switch_next_tiles(int value, textures *textures)
{
    sfTexture *tex = NULL;

    switch (value) {
        case 101: tex = textures->mountains;
            break;
        case 102: tex = textures->water;
            break;
        case 103: tex = textures->steps;
            break;
        case 104: tex = textures->dead_trees;
            break;
        case 110: tex = textures->city_wall;
            break;
        case 111: tex = textures->house;
            break;
    }
    return tex;
}

static sfTexture *switch_tiles(int value, textures *textures)
{
    sfTexture *tex = NULL;

    switch (value) {
        case 0: tex = textures->grass;
            break;
        case 1: tex = textures->pass;
            break;
        case 2: tex = textures->road;
            break;
        case 3: tex = textures->sand;
            break;
        case 9: tex = textures->dungeon_door;
            break;
    }
    if (tex == NULL)
        tex = switch_next_tiles(value, textures);
    return tex;
}

static sfRenderTexture *draw_tiles_on_map_sprite(map_data *map_data)
{
    for (int i = 0; i < MAP_HEIGHT; i++) {
        for (int j = 0; j < MAP_WIDTH; j++) {
            sfTexture *tex = switch_tiles(map_data->matrice[i][j],
            map_data->textures);
            sfSprite *tileSprite = sfSprite_create();
            sfSprite_setTexture(tileSprite, tex, sfFalse);
            sfVector2f pos = {j * TILE_SIZE_X, i * TILE_SIZE_Y};
            sfSprite_setPosition(tileSprite, pos);
            sfRenderTexture_drawSprite(map_data->map_render_tex,
            tileSprite, NULL);
            sfSprite_destroy(tileSprite);
        }
    }
    return map_data->map_render_tex;
}

void make_map_texture(map_data *map_data)
{
    map_data->textures = load_map_elements();
    map_data->map_render_tex = sfRenderTexture_create(MAP_WIDTH * TILE_SIZE_X,
    MAP_HEIGHT * TILE_SIZE_Y, sfFalse);
    sfRenderTexture_clear(map_data->map_render_tex, sfBlack);
    map_data->map_render_tex = draw_tiles_on_map_sprite(map_data);
    sfRenderTexture_display(map_data->map_render_tex);
}
