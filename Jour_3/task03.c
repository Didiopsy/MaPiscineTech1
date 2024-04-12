/*
** EPITECH PROJECT, 2024
** Jour3_Task01
** File description:
** my_print_alpha
*/
#include <unistd.h>

int my_print_digits(void)
{
    write(1, "0123456789\n", 11);
    return 0;
}