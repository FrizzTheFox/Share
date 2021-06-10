/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahmimid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:46:08 by jahmimid          #+#    #+#             */
/*   Updated: 2021/06/10 13:13:28 by jahmimid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src,
	   	int c, size_t n)
{
	size_t			i;
	unsigned char	*srccpy;
	unsigned char	*dstcpy;

	i = 0;
	srccpy = (unsigned char *)src;
	dstcpy = dst;
	while (i < n && srccpy[i] != (unsigned char)c)
	{
		dstcpy[i] = srccpy[i];
		i++;
	}
	if (i == n)
		return (NULL);
	else
	{
		dstcpy[i] = srccpy[i];
		i++;
		return (&dstcpy[i]);
	}
}
