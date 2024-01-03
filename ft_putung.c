#include "ft_printf.h"

static int c_nbr (unsigned int nbr)
{
    int i;

    i = 0;
    if (nbr == 0)
        return (1);
    while (nbr != 0)
    {
        nbr = nbr / 10;
        i++;
    }
    return (i);
}

int ft_putung (unsigned int n)
{
    int i = c_nbr(n);
    if (n > 9)
    {
        ft_putung(n / 10);
        ft_putung(n % 10);
    }
    else
    {
        ft_putchar(n + 48);
    }
    return (i);
}