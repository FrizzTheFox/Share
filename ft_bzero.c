/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahmimid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 11:13:32 by jahmimid          #+#    #+#             */
/*   Updated: 2021/05/24 11:27:29 by jahmimid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	int i;
	char *str;

	i = 0;
	str = s;
	while (n > 0)
	{
		str[i] = '\0';
		i++;
		n--;
	}
}

int	main(void)
{
	char s[] = "Bonjour";
	printf("Before: %s, \n", s);
	bzero(s, 8);
	printf("After bzero: %s, \n", s);
	ft_bzero(s, 5);
	printf("After ft_bzero: %s, \n", s);
	return 0;
}
