#include <unistd.h>

void main(void) {
    write(1, "day 03\n   Task 01 :\n", 20);
    my_print_alpha();
    write(1, "    Task 02 :\n", 14);
    my_print_revalpha();
    write(1, "    Task 03 :\n", 14);
    my_print_digits();
    write(1, "    Task 04 :\nValue = 1\n", 24);
    my_isneg(1);
    write(1, "Value = -1\n", 11);
    my_isneg(1);
    write(1, "    Task 05 :\n", 14);
    my_print_comb();
    write(1, "    Task 06 :\n", 14);
    //my_print_comb2();
}