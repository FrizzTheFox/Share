#include "ft_printf.h"

int ft_eval_and_treat(va_list args, char const *format, int i)
{
    if (format[i] == 'c')  
        ft_putchar(va_arg(args, int));                                                        // Single Char
    else if (format[i] == 's')
        ft_putstr(va_arg(args, char *));                                                      // String Of Char
    //else if (format[i] == 'p')
    //    ft_putaddress(va_arg(args, void *));                                                  // Void pointer arg, in hexa
    else if (format[i] == 'd')
        ft_putnbr(va_arg(args, int));                                                        // Decimal In Base 10
    else if (format[i] == 'i')
        ft_putnbr(va_arg(args, int));                                                        // Entier In Base 10
    else if (format[i] == 'u')
       ft_putunbr(va_arg(args, unsigned int));                                              // Unsigned Decimal in base 10
    else if (format[i] == 'x')
        ft_putnbr_base(va_arg(args, int), "0123456789abcdef");                               // Hexadeimal number
    else if (format[i] == 'X')
        ft_putnbr_base(va_arg(args, int), "0123456789ABCDEF");                               // Hexadeimal number maj
    else if (format[i] == '%')
        ft_putchar('%');                                                                     // Percentage sign
    else
        return (-1);
    return (i);
}

int ft_printf(char const *format, ...)
{
    va_list args;
    int     i;
    int     ret;

    va_start(args, format);
    i = 0;
    ret = 0;
    while(format[i])
    {
        if (format[i] == '%')
        {
            ft_eval_and_treat(args, format, i + 1);
            i++;
            i++;
            continue;
        }
        else
            ret = ret + write(1, &format[i], 1);
        i++;
    }
    va_end(args);
    return (ret);
}

int main(void)
{
    char    *c;
    int      i;

    c = "Hello !";
    i = 0;

    printf("printf: str: %s int: %d\n", c, i);
    ft_printf("ft_printf: str: %s int: %d\n", c, i);
    return (0);
}