#include <unistd.h>
#include "printf.h"


int ft_putchar(int c)
{
        return (write(1, &c, 1));
}