/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** data
*/

#ifndef DATA_H_
    #define DATA_H_
    #include "main.h"
    #include <SFML/Graphics/Types.h>
    #pragma once

// Battle:
    typedef struct battle_t {
        sfSprite *background;
        sfSprite *player;
        sfTexture *text_player;
        sfTexture *texture;
        sfVector2f pos_cyclope;
        sfVector2f pos_player;
        sfIntRect rect;
        sfTexture *cyclope;
        sfTexture *mino;
        sfTexture *monst;
        sfSprite *mino_sp;
        sfSprite *cyclo_sp;
        sfSprite *monst_sp;
        int special_attack;
        int ennemy_type;
        int ennemy_max_hp;
        int ennemy_hp;
        int ennemy_attack;
        int ennemy_xp;
        sfBool disp_help;
        sfSprite *help_sprite;
        sfTexture *help_texture;
        sfSprite *ennemy_bar;
        sfSprite *map_monster;
        sfVector2f pos_bar;
        sfVector2f pos_monst;
        sfVector2f pos_mino;
        sfTexture *bar_ennemy_0;
        sfTexture *bar_ennemy_1;
        sfTexture *bar_ennemy_2;
        sfTexture *bar_ennemy_3;
        sfTexture *bar_ennemy_4;
    } battle;

// Button:
    enum e_gui_button_state {
        IS_CLICKED = 1,
        IS_PRESSED = 2,
        IS_RELEASED = 3
    };

    typedef struct button_t {
        sfRectangleShape *rect;
        sfVector2f position;
        sfVector2f size;
        sfColor color;
        sfText *text;
        enum e_gui_button_state state;
        sfBool is_hover;
    } button;

    typedef struct options_t {
        button *new_game_button;
        button *load_game_button;
        button *settings_button;
        button *quit_button;
    } options;

    typedef struct buttons_t {
        button *button;
        struct s_gui_object *next;
    } buttons;

// Enemy:
    typedef struct monster {
        char *name;
        sfVector2f pos;
        sfSprite *sprite;
        sfTexture *texture;
        sfIntRect area;
        char stat;
    } monster;

// Events:
    enum state_type_e {
        NONE,
        SPLASH,
        SETTINGS,
        SETTINGS_PAUSE,
        PAUSE,
        BATTLE,
        MAP,
        INVENTORY
    };
    typedef struct state_t {
        enum state_type_e current_state;
        enum state_type_e previous_state;
    } state;

// Pnjs:
    typedef struct pnjs_t {
        char *name;
        sfTexture* message;
        sfVector2f pos;
        sfSprite *sprite;
        sfTexture *texture;
        sfIntRect area;
        char **dialog;
        int stat_num;
        char stat;
    } pnjs;

    typedef struct athena_t {
        char *name;
        sfTexture* message;
        sfVector2f pos;
        sfSprite *sprite;
        sfTexture *texture;
        sfIntRect area;
        char **dialog;
        int stat_num;
        char stat;
    } athena;

    typedef struct minotaure_t {
        char *name;
        sfTexture* message;
        sfVector2f pos;
        sfSprite *sprite;
        sfTexture *texture;
        sfIntRect area;
        char **dialog;
        int stat_num;
        char stat;
    } minotaure;

// Map:
    typedef struct life_bar_t {
        sfSprite *life_bar_sprite0;
        sfSprite *life_bar_sprite1;
        sfSprite *life_bar_sprite2;
        sfSprite *life_bar_sprite3;
        sfSprite *life_bar_sprite4;
        sfSprite *life_bar_sprite5;
        sfSprite *life_bar_sprite6;
        sfTexture *life_bar_texture0;
        sfTexture *life_bar_texture1;
        sfTexture *life_bar_texture2;
        sfTexture *life_bar_texture3;
        sfTexture *life_bar_texture4;
        sfTexture *life_bar_texture5;
        sfTexture *life_bar_texture6;
        sfVector2f life_bar_pos;
    } life_bar;
    typedef struct xp_bar_t {
        sfSprite *xp_bar_sprite0;
        sfSprite *xp_bar_sprite1;
        sfSprite *xp_bar_sprite2;
        sfSprite *xp_bar_sprite3;
        sfSprite *xp_bar_sprite4;
        sfTexture *xp_bar_texture0;
        sfTexture *xp_bar_texture1;
        sfTexture *xp_bar_texture2;
        sfTexture *xp_bar_texture3;
        sfTexture *xp_bar_texture4;
        sfVector2f xp_bar_pos;
    } xp_bar;
    typedef struct spell_bar_t {
        sfSprite *sprite0;
        sfSprite *sprite1;
        sfSprite *sprite2;
        sfSprite *sprite3;
        sfTexture *texture0;
        sfTexture *texture1;
        sfTexture *texture2;
        sfTexture *texture3;
        sfVector2f pos;
    } spell_bar;
    typedef struct level_nb_t {
        sfSprite *level_1_sprite;
        sfSprite *level_2_sprite;
        sfSprite *level_3_sprite;
        sfTexture *level_1_texture;
        sfTexture *level_2_texture;
        sfTexture *level_3_texture;
        sfVector2f level_nb_pos;
    } level_nb;
    typedef struct infos_t {
        life_bar *life_bar;
        spell_bar *spell_bar;
        xp_bar *xp_bar;
        level_nb *level_nb;
    } infos;
    typedef struct weather_t {
        sfSprite *clouds_sprite;
        sfSprite *cloud_sprite;
        sfSprite *rain_sprite;
        sfSprite *raindrop_sprite;
        sfTexture *cloud_texture;
        sfRenderTexture *clouds_render_tex;
        sfTexture *clouds_texture;
        sfTexture *raindrop_texture;
        sfRenderTexture *rain_render_tex;
        sfTexture *rain_texture;
        sfVector2f clouds_pos;
        sfVector2f rain_pos;
        sfBool is_raining;
    } weather;
    typedef struct textures_t {
        sfTexture *grass;
        sfTexture *pass;
        sfTexture *road;
        sfTexture *sand;
        sfTexture *dungeon_door;
        sfTexture *mountains;
        sfTexture *water;
        sfTexture *steps;
        sfTexture *dead_trees;
        sfTexture *city_wall;
        sfTexture *house;
    } textures;

    typedef struct map_data_t {
        sfRenderTexture *map_render_tex;
        sfTexture *map_final_tex;
        textures *textures;
        int **matrice;
    } map_data;
    typedef struct map_t {
        sfSprite *map_sprite;
        map_data *map_data;
        monster *monster;
        int num_enemies;
        pnjs *pnjs;
        int num_pnjs;
        weather *weather;
        infos *infos;
        sfBool disp_help;
        sfSprite *help_sprite;
        sfTexture *help_texture;
    } map;

// Inventory:
    typedef struct item_t {
        sfBool is_consumable;
        int quantity;
        int health_factor;
        int strength_factor;
        int shield_factor;
        sfTexture *texture;
        sfSprite *sprite;
        sfVector2f pos;
    } item;

    typedef struct items_t {
        item *sword;
        item *shield;
        item *potion;
        item *key;
    } items;

    typedef struct inventory_t {
        items *items;
        int num_items;
        sfSprite *background;
        sfTexture *texture;
    } inventory;

// Player:
    typedef struct player_t {
        int level;
        int xp;
        int xp_max;
        int health;
        int max_health;
        int strength;
        int intersection;
        int game_len;
        sfClock* clock;
        inventory *inventory;
        sfVector2f pos;
        sfSprite *sprite;
        sfTexture *texture;
        sfIntRect area;
    } player;

// Settings:
    typedef struct settings_t {
        // int music_volume;
        // int sound_volume;
        sfTexture *texture_parchment;
        sfTexture *texture_music;
        sfTexture *texture_sound;
        sfTexture *texture_resolutions;
        sfSprite *parchment;
        sfSprite *music;
        sfSprite *sound;
        sfSprite *resolutions;
        sfVector2f pos_music;
        sfVector2f pos_sound;
        sfVector2f pos_resolutions;
        // int fps;
    } settings;

// Splash_screen:
    typedef struct splash_screen_t {
        sfSprite *background;
        sfSprite *start;
        sfSprite *continued;
        sfSprite *help;
        sfSprite *quit;
        sfTexture *background_texture;
        sfTexture *start_tex;
        sfTexture *continued_tex;
        sfTexture *help_tex;
        sfTexture *quit_tex;
    } splash_screen;

// Text:
    typedef struct text_t {
        sfSprite *sprite1;
        sfSprite *sprite2;
        sfSprite *sprite3;
        sfSprite *sprite4;
        sfSprite *win;
        sfTexture *texture1;
        sfTexture *texture2;
        sfTexture *texture3;
        sfTexture *texture4;
        sfVector2f pos;
        int len;
        int size;
    } text;

// Ui:
    struct s_gui_menu_bar {
        struct s_gui_drop_menu *drop_menus;
        struct s_gui_menu_bar *next;
    };

    struct s_gui_options {
        button *button;
        struct s_gui_object *option;
        struct s_gui_options *next;
    };

    struct s_gui_drop_menu {
        button *button;
        struct s_gui_options *options;
        sfBool is_open;
        struct s_gui_drop_menu *next;
    };

// Pause_menu:
    typedef struct pause_menu_t {
        sfSprite *menu;
        sfSprite *return_button;
        sfTexture *text_return;
        sfTexture *text_menu;
    } pause_menu;

    typedef struct settings_pause_t {
        sfSprite *background;
        sfSprite *settings_parch;
    } settings_pause;

// Clocks:
    typedef struct clocks_t {
        sfClock *cloud_clock;
        sfClock *rain_clock;
        sfClock* pnj;
        sfClock* athena;
        sfClock* minotaure;
        sfClock* player;
        sfClock* view;
        sfClock* text;
    } clocks;

// Game:
    typedef struct game_t {
        sfView *view;
        state *state;
        splash_screen *splash;
        pause_menu *pause_menu;
        settings *settings;
        map *map;
        battle *battle;
        player *player;
        pnjs *pnjs;
        athena *athena;
        minotaure *minotaure;
        int num_pnjs;
        clocks *clocks;
        sfMusic *music;
        text* text;
    } game;


#endif /* !DATA_H_ */
