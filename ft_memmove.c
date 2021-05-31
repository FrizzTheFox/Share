/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahmimid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 11:34:58 by jahmimid          #+#    #+#             */
/*   Updated: 2021/05/31 16:13:11 by jahmimid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;
	char	*destcpy;
	char	*srccpy;

	i = 0;
	destcpy = (char *)dest;
	srccpy = (char *)src;
	while (srccpy[i] != '\0' && i < len)
	{
		destcpy[i] = srccpy[i];
		i++;
	}
	return (destcpy);
}
