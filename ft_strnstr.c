/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahmimid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 11:56:45 by jahmimid          #+#    #+#             */
/*   Updated: 2021/05/31 16:14:11 by jahmimid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		n;
	size_t	h;

	h = 0;
	if (*needle == '\0' || needle == NULL)
		return ((char *)haystack);
	while (haystack[h] != '\0' && h < len)
	{
		n = 0;
		while (needle[n] == haystack[h + n] && h + n < len)
		{
			if (needle[n + 1] == '\0')
				return ((char *)haystack + h);
			n++;
		}
		h++;
	}
	return (NULL);
}

int	main(void)
{
	char search[] = "concatenate";
	char find[] = "cat";
	printf("strnstr: %s \n", strnstr(search, find, 5));
	printf("ft_strnstr: %s \n", ft_strnstr(search, find, 5));
	return 0;
}
