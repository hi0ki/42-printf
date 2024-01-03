#include "ft_printf.h"

static int c_nbr (unsigned int nbr)
{
    int i;

    i = 0;
    if (nbr < 0)
        i++;
    while (nbr != 0)
    {
        nbr = nbr / 10;
        i++;
    }
    return (i);
}

int ft_putung (unsigned int n)
{
    if (n < 0)
    {
        write(1, "-", 1);
        n *= -1;
        ft_putung(n);
    }
    else if (n > 9)
    {
        ft_putung(n / 10);
        ft_putung(n % 10);
    }
    else
    {
        ft_putchar(n + 48);
    }
    return (c_nbr(n));
}