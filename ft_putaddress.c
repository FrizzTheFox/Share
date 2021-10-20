/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahmimid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 10:00:06 by jahmimid          #+#    #+#             */
/*   Updated: 2021/10/20 10:01:18 by jahmimid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexadd(unsigned long int nb, char *base)
{
	int	len;

	len = 0;
	if (nb > 15)
		len += ft_puthexadd(nb / 16, base);
	len += ft_putchar(base[nb % 16]);
	return (len);
}

int	ft_putaddress(void *address)
{
	int	len;

	len = 0;
	if (address == NULL)
	{
		len += ft_putstr("0x0");
		return (len);
	}
	len += ft_putstr("0x");
	len += ft_puthexadd((uintptr_t)address, "0123456789abcdef");
	return (len);
}
