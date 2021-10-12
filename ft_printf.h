#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdint.h>
#include "ft_putchar.c"
#include "ft_putstr.c"
#include "ft_putnbr.c"
#include "ft_putnbr_base.c"

int     ft_printf(const char *format, ...);
int     ft_atoi(const char *str);
void    ft_putchar(char c);
void    ft_putstr(char *s);
void	ft_putnbr_base(int nbr, char *base);
void	ft_putnbr(int n);
int     ft_eval_and_treat(va_list args, char const *format, int i);
void    ft_puthexa(int nb, char *base);
void	ft_putunbr(unsigned int n);

#endif