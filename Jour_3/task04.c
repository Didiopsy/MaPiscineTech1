/*
** EPITECH PROJECT, 2024
** Jour3_Task01
** File description:
** my_print_alpha
*/
#include <unistd.h>

int my_isneg(int n)
{
    if (n >= 0) {
        write(1, "P\n", 2);
        return 0;
    } else {
        write(1, "N\n", 2);
        return 0;
    }
    return 84;
}