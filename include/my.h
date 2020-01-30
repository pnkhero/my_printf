/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#include <stdarg.h>

#ifndef MY_H_
#define MY_H_

int check_flag(char flag, va_list ap);
int check_flag2(char flag, va_list ap);
int check_flag4(char flag, va_list ap);
int my_printf(char *str, ...);
int my_strlenprintf(char const *str);
unsigned int unsigned_putnbr(unsigned int nb);
int my_putstr(char const *str);
int my_putnbr(int nb);
void my_octal_nb(int nbr);
int my_putchar(char c);
void my_binary_nb(int nbr);
char *my_revstr(char *str);
int my_strlen(char const *str);
void my_hexa_nb(int nbr);
void my_pointer(unsigned long long ptr);
int check_flag3(char flag, va_list ap);
void my_hexa_longnb(unsigned long long nbr);
void my_hexamaj(int nbr);
void my_putnbrlong(long int nb);
void my_snprintf(char *str);
#endif /* !MY_H_ */
