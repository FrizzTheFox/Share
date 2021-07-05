/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahmimid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 12:12:53 by jahmimid          #+#    #+#             */
/*   Updated: 2021/07/05 17:20:01 by jahmimid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char *s, char c)
{
	int wcount;

	wcount = 0;
	if (s == NULL || *s == '\0')
		return (0);
	while (*s)
	{
		if (*s && *(s + 1) != c)
			wcount++;
		s++;
	}
	wcount++;
	return (wcount);
}

static int	ft_word_lenght(char *s, char c, int i)
{
	int	wlen;

	wlen = 0;
	if (s == NULL || *s == '\0')
		return (0);
	while (s[i] != '\0' && s[i] != c)
	{
		wlen++;
		i++;
	}
	return (wlen);
}

static char	**treat(char const *s, char **dst, char c, int slen)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 0;
	while (s[a] && b < slen)
	{
		k = 0;
		while (s[a] == c)
			a++;
		dst[b] = (char *)malloc(sizeof(char) * (ft_word_lenght(s, c, i) + 1));
		if (dst[b] == NULL)
			return (ft_free(dst));
		while (s[a] && s[a] != c)
		{
			dst[b][c] = s[a];
			c++;
			a++;
		}
		dst[b][c] = '\0';
		b++;
	}
	dst[b] = '\0';
	return (dst);
}

static void	**ft_free(char **str, int i)
{
	while (str[i] && i > 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int	slen;
	char **str;

	slen = ft_count_word(s, c);
	if (!s)
		return (NULL);
	str = malloc(sizeof(char *) * (slen + 1));
	if (str == NULL)
		return (NULL);
	str[slen + 1] = NULL;
	return (str);
}
