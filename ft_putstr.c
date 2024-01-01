#include "printf.h"

int ft_putstr(char *str)
{
    int i = 0;

    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\0", 1);
    return (i);
}
int main()
{
    printf("%d", ft_putstr("hello"));
}