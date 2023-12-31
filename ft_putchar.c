#include <stdio.h>
#include <stdarg.h>

int ft_count(char *str)
{
    int i = 0;
    int x = 0;
    while (str[i])
    {
        if (str[i] == '%')
            x++;
        i++;
    }
    return (x);
}
void variadicfucntion(char *format, ...)
{
    int x = 0;
    va_list cnt;
    va_start(cnt, format);
    int count = ft_count(format);
    while(x < 2)
    {
        while (format[x] != '%')
            x++;
        x++;
        if (format[x] == 'd')
            vprintf("%d", cnt);
        // else if (format[x] == 's')
        //     vprintf("%s", cnt);
        // x++;
    }
    printf("\nend");
    // vprintf("%d\n", cnt);
    // vprintf("%d\n", cnt);
    // vprintf("%d\n", cnt);
    // vprintf("%d\n", cnt);

    va_end(cnt);
}
int main()
{
    variadicfucntion("%d", 5);
}