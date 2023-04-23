/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** data
*/

#ifndef DATA_H_
    #define DATA_H_
    #include "main.h"
    #pragma once

// Battle:
    typedef struct battle_t {
        sfSprite *background;
        sfSprite *player;
        sfTexture *text_player;
        sfTexture *texture;
        sfVector2f pos_ennemy;
        sfVector2f pos_player;
        sfIntRect rect;
        sfTexture *cyclope;
        sfSprite *ennemy_sprite;
        int special_attack;
        int ennemy_type;
        int ennemy_hp;
        int ennemy_attack;
        int ennemy_xp;
        sfBool disp_help;
        sfSprite *help_sprite;
        sfTexture *help_texture;
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
        sfIntRect area;
        char stat;
    } monster;

// Events:
    enum state_type_e {
        NONE,
        SPLASH,
        SETTINGS,
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
        sfSprite *life_bar_sprite7;
        sfVector2f life_bar_pos;
    } life_bar;
    typedef struct xp_bar_t {
        sfSprite *xp_bar_sprite0;
        sfSprite *xp_bar_sprite1;
        sfSprite *xp_bar_sprite2;
        sfSprite *xp_bar_sprite3;
        sfSprite *xp_bar_sprite4;
        sfVector2f xp_bar_pos;
    } xp_bar;
    typedef struct spell_bar_t {
        sfSprite *sprite0;
        sfSprite *sprite1;
        sfSprite *sprite2;
        sfSprite *sprite3;
        sfVector2f pos;
    } spell_bar;
    typedef struct level_nb_t {
        sfSprite *level_1_sprite;
        sfSprite *level_2_sprite;
        sfSprite *level_3_sprite;
        sfVector2f level_nb_pos;
    } level_nb;
    typedef struct infos_t {
        life_bar *life_bar;
        spell_bar *spell_bar;
        xp_bar *xp_bar;
        level_nb *level_nb;
    } infos;
    typedef struct weather_t {
        sfSprite *cloud_sprite;
        sfSprite *rain_sprite;
        sfVector2f cloud_pos;
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
        sfIntRect area;
    } player;

// Settings:
    typedef struct settings_t {
        int music_volume;
        int sound_volume;
        sfBool fullscreen;
        sfTexture *texture_music;
        sfTexture *texture_sound;
        sfTexture *texture_resolutions;
        sfSprite *music;
        sfSprite *sound;
        sfSprite *resolutions;
        sfVector2f pos_music;
        sfVector2f pos_sound;
        sfVector2f pos_resolutions;
        int fps;
    } settings;

// Splash_screen:
    typedef struct splash_screen_t {
        sfSprite *background;
        sfSprite *start;
        sfSprite *continued;
        sfSprite *help;
        sfSprite *quit;
    } splash_screen;

// Text:
    typedef struct text_t {
        sfText *text;
        sfFont *font;
        sfVector2f position;
        sfColor color;
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
        button *resume_button;
        button *quit_button;
        button *settings_button;
        button *load_button;
        button *save_button;
    } pause_menu;

// Clocks:
    typedef struct clocks_t {
        sfClock *cloud_clock;
        sfClock *rain_clock;
        sfClock* pnj;
        sfClock* athena;
        sfClock* minotaure;
        sfClock* player;
        sfClock* view;
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
    } game;


#endif /* !DATA_H_ */
