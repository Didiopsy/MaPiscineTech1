/*
** EPITECH PROJECT, 2024
** Jour3_Task01
** File description:
** my_print_alpha
*/
#include <unistd.h>

int my_print_comb(void)
{
    int i = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    char oui;

    while (a * 100 + (b * 10) + c != 789) {
        if (a != b && b != c && c != a
        && a < b && b < c) {
            oui = (a + '0');
            write(1, &oui, 1);
            oui = (b + '0');
            write(1, &oui, 1);
            oui = (c + '0');
            write(1, &oui, 1);
            write(1, ", ", 1);
        }
        if (c == 9) {
            c = 0;
            b++;
        } else {
            c++;
        }
        if (b == 10) {
            b = 0;
            a++;
        }
        i++;
    }
    write(1, "789\n", 4);
}