/*
** EPITECH PROJECT, 2024
** Jour3_Task01
** File description:
** my_print_alpha
*/
#include <unistd.h>

int my_print_revalpha(void)
{
    write(1, "zyxwvutsrqponmlkjihgfedcba\n", 27);
    return 0;
}
