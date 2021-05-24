/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahmimid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 11:55:08 by jahmimid          #+#    #+#             */
/*   Updated: 2021/05/24 14:44:54 by jahmimid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t i;
	char *srccpy;
	char *dstcpy;

	i = 0;
	dstcpy = (char *)dst;
	srccpy = (char *)src;
	while (dstcpy[i] && i < n)
	{
		dstcpy[i] = srccpy[i];
		i++;
	}
	return 0;
}

int	main(void)
{
	char src[] = "Bonjour";
	char dest[] = "Hello";

	printf("Before ft_memcpy: %s \n", dest);
	ft_memcpy(dest, src, 5);
	printf("After ft_memcpy: %s \n", dest);
	return 0;
}
