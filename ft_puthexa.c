#include "printf.h"

void    ft_puthexa(int nb, char *base)
{
    if (nb > 15)
        ft_puthexa(nb / 16, base);
    ft_putchar(base[nb % 16]);
}