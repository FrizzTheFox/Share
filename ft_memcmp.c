/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahmimid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 11:44:56 by jahmimid          #+#    #+#             */
/*   Updated: 2021/05/31 16:13:35 by jahmimid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*s1cpy;
	char	*s2cpy;

	i = 0;
	s1cpy = (char *)s1;
	s2cpy = (char *)s2;
	while (s1cpy[i] == s2cpy[i] && i < n - 1)
		i++;
	return (s1cpy[i] - s2cpy[i]);
}
