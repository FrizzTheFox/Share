/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahmimid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:46:08 by jahmimid          #+#    #+#             */
/*   Updated: 2021/05/31 16:18:22 by jahmimid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src,
	   	int c, size_t n)
{
	size_t	i;
	char	*srccpy;
	char	*dstcpy;

	i = 0;
	dstcpy = (char *)dst;
	srccpy = (char *)src;
	while (srccpy[i] && i < n)
	{
		if (srccpy[i] == c)
			return (0);
		dstcpy[i] = srccpy[i];
		i++;
	}
	return (0);
}
