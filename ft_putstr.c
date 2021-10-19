#include "ft_printf.h"
#include <unistd.h>

int    ft_putstr(char *s)
{
    int i;
    int len;

    i = 0;
    len = 0;
    if (s == NULL)
    {
        len = write(1, "(null)", 6);
        return (len);
    }
    while (s[i])
    {
        write(1, &s[i], 1);
        i++;
        len++;
    }
    return (len);
}