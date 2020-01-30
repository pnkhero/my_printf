/*
** EPITECH PROJECT, 2019
** my_extraflag.c
** File description:
** other flag like %p
*/

#include <stdlib.h>
#include "../../include/my.h"

void my_hexa_longnb(unsigned long long nbr)
{
    int	result;

    if (nbr >= 16) {
        result = nbr % 16;
        nbr = nbr / 16;
        my_hexa_longnb(nbr);
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

void my_pointer(unsigned long long ptr)
{
    if (ptr == 0)
        my_putstr("(nil)");
    else
    {
        my_putstr("0x");
        my_hexa_longnb(ptr);
    }
}

void my_hexamaj(int nbr)
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
        my_putchar(result + 55);
    else
        my_putchar(result + 48);
}

void my_putnbrlong(long int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    else if (nb < 10)
        my_putchar(nb + '0');
        if (nb >= 10) {
            my_putnbr(nb / 10);
            nb = (nb % 10);
            my_putchar(nb + '0');
        }
}

