/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahmimid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 10:02:41 by jahmimid          #+#    #+#             */
/*   Updated: 2021/10/20 10:08:19 by jahmimid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_eval_and_treat(va_list args, char const *format, int i, int len)
{
	if (format[i] == 'c')
		len = ft_putchar(va_arg(args, int));
	else if (format[i] == 's')
		len = ft_putstr(va_arg(args, char *));
	else if (format[i] == 'p')
		len = ft_putaddress(va_arg(args, void *));
	else if (format[i] == 'd')
		len = ft_putnbr(va_arg(args, int));
	else if (format[i] == 'i')
		len = ft_putnbr(va_arg(args, int));
	else if (format[i] == 'u')
		len = ft_putunbr(va_arg(args, unsigned int));
	else if (format[i] == 'x')
		len = ft_puthexa(va_arg(args, int), "0123456789abcdef");
	else if (format[i] == 'X')
		len = ft_puthexa(va_arg(args, int), "0123456789ABCDEF");
	else if (format[i] == '%')
		len = ft_putchar('%');
	else
		return (-1);
	return (len);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, format);
	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += ft_eval_and_treat(args, format, i + 1, len);
			i++;
			i++;
			continue ;
		}
		else
			len += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}
