void incrementation(int *a, int *b, int *c, int *d)
{
    if ((*d) == 9) {
        (*d) = 0;
        (*c)++;
    } else {
        (*d)++;
    }
    if ((*c) == 10) {
        (*c) = 0;
        (*b)++;
    }
    if ((*b) == 10) {
        (*b) = 0;
        (*a)++;
    }
}

int my_print_comb2() {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    char e;

    while (a * 1000 + (b * 100) + (c * 10) + d != 9899) {
        if (a != b && c != d) {
            e = (a + '0');
            write(1, &e, 1);
            e = (b + '0');
            write(1, &e, 1);
            write(1, " ", 1);
            e = (c + '0');
            write(1, &e, 1);
            e = (d + '0');
            write(1, &e, 1);
            write(1, ", ", 2);
        }
        incrementation(&a, &b, &c, &d);
    }
    write(1, "98 99\n", 6);
}