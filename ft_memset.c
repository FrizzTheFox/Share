/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahmimid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:39:17 by jahmimid          #+#    #+#             */
/*   Updated: 2021/05/20 17:02:20 by jahmimid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int i;
	char *str;

	i = 0;
	str = b;
	while (len > 0)
	{
		str[i] = c;
		i++;
		len--;
	}
	return 0;
}

int main(void)
{
	char str[] = "BonjourBonsoir";
	printf("Before: %s \n", str);
	memset(str, '*', 3);
	printf("After memset: %s \n", str);
	ft_memset(str, '*', 5);
	printf("After ft_memset: %s \n", str);
	return (0);
}
