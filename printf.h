#ifndef PRINTF_H
# define PRINTF_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

int ft_printf(const char *, ...);
int ft_putstr(char *str);
int ft_putchar(char c);

#endif