/*
** EPITECH PROJECT, 2024
** Jour3_Task01
** File description:
** my_print_alpha
*/
#include <unistd.h>

int my_print_alpha(void)
{
    write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
    return 0;
}
