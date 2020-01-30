/*
** EPITECH PROJECT, 2019
** my_revstr.c
** File description:
** No file there just an epitech header example
*/

#include <stdio.h>
#include "../../include/my.h"

char *my_revstr(char *str)
{
    int i;
    int len;
    char swap;
    int j = 0;

    i = 0;
    len = my_strlen(str) - 1;
    while (i < (my_strlen(str) / 2)) {
        swap = str[i];
        str[i] = str[len];
        str[len] = swap;
        i++;
        len--;
    }
    my_putstr(str);
    return (str);
}
