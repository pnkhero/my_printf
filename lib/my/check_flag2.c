/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** check_flag
*/

#include <stdarg.h>
#include <stdio.h>
#include "../../include/my.h"

int check_flag2(char flag, va_list ap)
{
    switch (flag)
    {
    case 'b':
        my_binary_nb(va_arg(ap, int));
        break;
    case '%':
        my_putchar('%');
        break;
    case 'n':
        my_strlenprintf(va_arg(ap, char *));
        break;
    case 'o':
        my_octal_nb(va_arg(ap, int));
        break;
    default:
        check_flag3(flag, ap);
    }
}

int check_flag3(char flag, va_list ap)
{
    switch (flag)
    {
    case 'x':
        my_hexa_nb(va_arg(ap, int));
        break;
    case 'p':
        my_pointer(va_arg(ap, unsigned long long));
        break;
    case 'X':
        my_hexamaj(va_arg(ap, int));
        break;
    case 'l':
        my_putnbrlong(va_arg(ap, long int));
        break;
    default:
        check_flag4(flag, ap);
    }
}

int check_flag4(char flag, va_list ap)
{
    switch (flag)
    {
        case 'S':
        my_snprintf(va_arg(ap, char *));
        break;
    }
}