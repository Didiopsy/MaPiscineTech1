int my_put_nbr(int nb)
{
    if (nb < 0) {
        write(1, "-", 1);
        nb = nb * -1;
    }
    
}