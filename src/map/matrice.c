/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** matrice
*/

#include "../../include/main.h"
#include "../../include/map.h"
#include "../../include/lib.h"

char *open_and_read_file(char *path)
{
    struct stat st;
    char *buffer;
    int fd = open("ressources/maps/map.txt", O_RDONLY);

    stat("ressources/maps/map.txt", &st);
    buffer = malloc(st.st_size);
    read(fd, buffer, st.st_size);
    close(fd);

    return buffer;
}

char *compute_temp(char *buffer, char *temp)
{
    int count = 0;
    while (*buffer != ';' && count < 5) {
        temp[count] = *buffer;
        buffer++;
        count++;
    }
    return buffer;
}

void load_matrice(map_data *map_data)
{
    char *buffer = open_and_read_file("ressources/maps/map.txt");
    map_data->matrice = malloc(sizeof(int *) * MAP_HEIGHT);

    for (int i = 0; i < MAP_HEIGHT; i++)
        map_data->matrice[i] = malloc(sizeof(int) * MAP_WIDTH);

    char *temp;
    for (int i = 0; i < MAP_HEIGHT; i++) {
        for (int j = 0; j < MAP_WIDTH; j++) {
            temp = malloc(sizeof(char) * 5);
            buffer = compute_temp(buffer, temp);
            buffer++;
            my_getnbr(temp, &map_data->matrice[i][j]);
            free(temp);
        }
    }
}
