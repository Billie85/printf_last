# ifndef PRINTF_H
# define PRINTF_H

 # include <limits.h>
 # include <stdio.h>
 # include <stdlib.h>
 # include <stdint.h>
 # include <stdarg.h>
 # include <unistd.h>

int count_function (size_t number);
int count_decimal (size_t number); // 10進数ver
size_t big_hexadecimal(unsigned int c);
size_t hexadecimal(unsigned int c);
int ft_putchar(int c);
size_t ft_evolution_putnbr(size_t n);
int    ft_putnbr(void *n);
int    ft_putstr(char *n);
size_t ft_unsigned_putnbr(unsigned int n);

#endif