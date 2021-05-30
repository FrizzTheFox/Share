/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahmimid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:03:10 by jahmimid          #+#    #+#             */
/*   Updated: 2021/05/24 16:41:45 by jahmimid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	s++;
	if (*s == c)
		return (s);
	else
		return (NULL);
}

int	main(void)
{
	char str[] = "Bonjour";
	printf("strchr: %s \n", strchr(str, 'B'));
	printf("ft_strchr: %s \n", ft_strchr(str, 'B'));
	return 0;
}
