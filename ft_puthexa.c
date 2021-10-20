/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahmimid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 09:57:33 by jahmimid          #+#    #+#             */
/*   Updated: 2021/10/20 09:58:39 by jahmimid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int nb, char *base)
{
	int	len;

	len = 0;
	if (nb > 15)
		len += ft_puthexa(nb / 16, base);
	len += ft_putchar(base[nb % 16]);
	return (len);
}
