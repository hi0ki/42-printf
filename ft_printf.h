#ifndef ft_PRINTF_H
# define ft_PRINTF_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

int ft_printf(const char *format, ...);
int ft_putstr(char *str);
int ft_putnbr(int n);
int ft_putung(unsigned int n);
int ft_putchar(char c);

#endif