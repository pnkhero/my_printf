/*
** EPITECH PROJECT, 2018
** unsigned_putnbr
** File description:
** No file there , just an epitech header example
*/

#include <stdio.h>
#include <unistd.h>
#include "../../include/my.h"

unsigned int unsigned_putnbr(unsigned int nb)
{
    if (nb < 10)
        my_putchar(nb + '0');
    if (nb >= 10) {
        my_putnbr(nb / 10);
        nb = (nb % 10);
        my_putchar(nb + '0');
    }
    return (nb);
}

