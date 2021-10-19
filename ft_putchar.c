#include "ft_printf.h"
#include <unistd.h>

int ft_putchar(char c)
{
    int len;

    len = write(1, &c, 1);
    return(len);
}