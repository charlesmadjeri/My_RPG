/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** data
*/

#ifndef DATA_H_
    #define DATA_H_
    #include <SFML/Graphics.h>
    #pragma once

// Battle:
    typedef struct battle_t {
        sfSprite *background;
        sfTexture *texture;
        sfVector2f position;
        sfIntRect rect;
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
    typedef struct enemy_t {
        char *name;
        int level;
        int health;
        int max_health;
        int strength;
    } enemy;

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
        char **dialog;
    } pnjs;

// Map:
    typedef struct textures_t {
        sfTexture *grass;
        sfTexture *pass;
        sfTexture *stone_road;
        sfTexture *sand;
        sfTexture *bridge;
        sfTexture *final_boss_dungeon;
        sfTexture *mountains;
        sfTexture *water;
        sfTexture *unattackable_monster;
        sfTexture *dead_trees;
        sfTexture *city_wall;
        sfTexture *house;
    } textures;

    typedef struct map_data_t {
        sfRenderTexture *map_render_tex;
        const sfTexture *map_final_tex;
        textures *textures;
        int **matrice;
    } map_data;
    typedef struct map_t {
        sfSprite *map_sprite;
        map_data *map_data;
        enemy *enemies;
        int num_enemies;
        pnjs *pnjs;
        int num_pnjs;
    } map;

// Inventory:
    typedef struct item_t {
        sfBool is_consumable;
        int quantity;
        int health_factor;
        int strength_factor;
        int shield_factor;
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
    } inventory;

// Player:
    typedef struct player_t {
        char *name;
        int level;
        int xp;
        int health;
        int max_health;
        int strength;
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

// Game:
    typedef struct game_t {
        state *state;
        splash_screen *splash;
        pause_menu *pause_menu;
        settings *settings;
        map *map;
        player *player;
        pnjs *pnjs;
        int num_pnjs;
        sfClock *clock;
    } game;


#endif /* !DATA_H_ */
