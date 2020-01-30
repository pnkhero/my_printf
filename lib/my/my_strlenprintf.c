/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** Pas de fichier ici, juste un exemple d'en-tête epitech
*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "../../include/my.h"

int my_strlenprintf(char const *str)
{
    int i = 0;
    while (str[i] != '\0'){
        i++;
    }
    my_putnbr(i);
    return (i);
}