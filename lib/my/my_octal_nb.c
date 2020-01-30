/*
** EPITECH PROJECT, 2019
** my_octal_nb
** File description:
** my_octal_nb
*/

#include "../../include/my.h"
#include <stdlib.h>

void my_octal_nb(int nbr)
{
    int	result;

    if (nbr >= 8) {
        result = nbr % 8;
        nbr = nbr / 8;
        my_octal_nb(nbr);
    }
    else if (nbr > 0) {
        result = nbr % 8;
        nbr = nbr / 8;
    }
    my_putchar(result + 48);
}

void my_binary_nb(int nbr)
{
    int	result = 0;

    if (nbr > 1) {
        result = nbr % 2;
        nbr = nbr / 2;
        my_binary_nb(nbr);
    }
    else if (nbr > 0) {
        result = nbr % 2;
        nbr = nbr / 2;
    }
    my_putchar(result + 48);
}

void my_hexa_nb(int nbr)
{
    int	result;

    if (nbr >= 16) {
        result = nbr % 16;
        nbr = nbr / 16;
        my_hexa_nb(nbr);
        }
    else if (nbr > 0) {
        result = nbr % 16;
        nbr = nbr / 16;
        }
    if (result > 9)
        my_putchar(result + 87);
    else
        my_putchar(result + 48);
}

void my_snprintf(char *str)
{
    int i = 0;
    int nb = 0;

    while (str[i] != '\0') {
        if (str[i] <= 32 || str[i] >= 127) {
            my_putchar('\\');
            my_octal_nb(str[i]);
            i++;
        }
        else
        {
            my_putchar(str[i]);
            i++;
        }
    }
}