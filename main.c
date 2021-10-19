#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int pf;
    int ftpf;
    char    *s;

    s = NULL;
    pf = printf("printf: %s \n", s);
    ftpf = ft_printf("ft_printf: %s ", s);
    printf("\npf: %d\n", pf);
    printf("ftpf: %d\n", ftpf);
    return (0);
}