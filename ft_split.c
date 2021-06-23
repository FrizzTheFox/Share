/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahmimid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 12:12:53 by jahmimid          #+#    #+#             */
/*   Updated: 2021/06/14 16:28:52 by jahmimid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_word_count(char *s, char c)
{
//	int i;
	int count;

//	i = 0;
	count = 0;
	if (s == NULL || *s == '\0')
		return (0);
	while (*s)
	{
		if (*s && *(s + 1) != c)
			count++;
		s++;
	}
	count++;
	return (count);
}

static int	ft_word_lenght(char *s, char c)
{
	int	i;

	i = 0;
	if (s == NULL || *s == '\0')
		return (0);
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static void	ft_strcpy(char *src, char *dst, int len)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

static void	**ft_free(char **str)
{
	int	i;

	i = 0;
	while (*str[i] != '\0')
	{
		free(str[i]);
		i++;
	}
	free(str[i]);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int	j;
	char **str;

	j = 0;
	if (!s)
		return (NULL);
	str = malloc(sizeof(char *) * (ft_word_count((char *)s, c) + 1));
	if (str == NULL)
		return (NULL);
	str[ft_word_count((char *)s, c) + 1] = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			str[j] = malloc(sizeof(char) * (ft_word_lenght((char *)s, c) + 1));
			if (str[j] == NULL)
			{
				ft_free(str);
				return (NULL);
			}
			ft_strcpy((char *)s, str[j], ft_word_lenght((char *)s, c));
			j++;
			s = s + ft_word_lenght((char *)s, c);
		}
	}
	return (str);
}

/*int	main(void)
{
	int i;

	i = 0;
	char **str = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Sus pendisse", ' ' );
	while (i < 13)
	{
		printf("%s\n", str[i]);
		i++;
	}

	return 0;
}*/
