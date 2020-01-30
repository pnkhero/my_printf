/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf
*/

#include <stdarg.h>
#include <stdio.h>
#include "../../include/my.h"

int check_flag(char flag, va_list ap)
{
    switch (flag)
    {
    case 'd':
    case 'i':
        my_putnbr(va_arg(ap, int));
        break;
    case 's':
        my_putstr(va_arg(ap, char *));
        break;
    case 'c':
        my_putchar(va_arg(ap, int));
        break;
    case 'u':
        unsigned_putnbr(va_arg(ap, unsigned int));
        break;
    default:
        check_flag2(flag, ap);
    }
}

int my_printf(char *str, ...)
{
    va_list ap;
    int i = 0;

    va_start(ap, str);
    while (str[i] != '\0') {
        if (str[i] == '%') {
            i++;
            check_flag(str[i], ap);
        }
        else
            my_putchar(str[i]);
        i++;
    }
    va_end(ap);
}