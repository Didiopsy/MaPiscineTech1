/*
** EPITECH PROJECT, 2024
** Jour3_Task01
** File description:
** my_print_alpha
*/
#include <unistd.h>

int main(void)
{
    my_print_comb();
    return 0;
}

int my_print_comb(void)
{
    int i = 0;
    int a = 0;
    int b = 0;
    int c = 0;

    while (i != 1000) {
        if (a != b && b != c && c != a) {
            write(1, &(a + '0' - 1), 1);
            write(1, &(b + '0' - 1), 1);
            write(1, &(c + '0' - 1), 1);
            write(1, ", ", 1);
        }
        if (c == 9) {
            c = 0;
            b++;
        } else {
            c++;
        }
        if (b == 9) {
            b = 0;
            a++;
        }
        i++;
    }
}