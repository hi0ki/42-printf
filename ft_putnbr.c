#include "printf.h"

int c_nbr (int nbr)
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
int ft_putnbr(int n)
{
    if (n == -2147483648)
        write(1, "-2147483648", 11);
    else if (n < 0)
    {
        write(1, "-", 1);
        n *= -1;
        ft_putnbr(n);
    }
    else if (n > 9)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else
    {
        ft_putchar(n + 48);
    }
    return (c_nbr(n));
}
int main()
{
    printf("\n%d\n", ft_putnbr(444));
}