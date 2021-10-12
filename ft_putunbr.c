#include "ft_printf.h"

void	ft_putunbr(unsigned int n)
{
	if (n > 9)
		ft_putunbr((n / 10));
	ft_putchar((n % 10) + 48);
}