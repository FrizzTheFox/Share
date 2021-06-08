/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahmimid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:56:51 by jahmimid          #+#    #+#             */
/*   Updated: 2021/06/08 16:49:05 by jahmimid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		len;
	int		debut;
	int		fin;
	int		s;
	int		i;

	debut = 0;
	s = 0;
	i = 0;
	fin = ft_strlen(s1);
	len = ft_strlen(s1);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	while (set[s] != '\0')
	{
		if (s1[debut] == set[s])
		{
			debut++;
			s = 0;
		}
		s++;
	}
	while (set[s] != '\0')
	{
		if (s1[fin] == set[s])
		{
			fin--;
			s = 0;
		}
		s++;
	}
	while (debut < fin)
	{
		res[i] = s1[debut];
		i++;
		debut++;
	}
	return (res);
}
