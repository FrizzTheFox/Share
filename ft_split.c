/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahmimid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:57:03 by jahmimid          #+#    #+#             */
/*   Updated: 2021/06/10 16:47:52 by jahmimid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int		ft_needed_strs(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	count++;
	return (count);
}

static char		*ft_word_alloc(char *s, char c)
{
	int		i;
	char	*str;

	i = 0;
	while(s[i] != c && s[i] != '\0')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str = NULL)
		return (NULL);
	return (str);
	
}

static char	*ft_word_fill(char *s1, char *s2, char c)
{
	int	i;

	i = 0;
	while (s1[i] != c && s1[i] != '\0')
	{
		
	}
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	char	*scpy;
	int		count;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	count = ft_needed_strs(s, c);
	str = (char **)malloc(sizeof(char *) * (count + 1));
	if (str == NULL)
		return (NULL);
	while (count > 0)
	{
		str[i][j] = s[k];
		if (s[k] == c)
		{
			i++;
			j = 0;
		}
		j++;
		k++;
	}
	return (str);
}

int		main(void)
{
	int i;

	i = 0;
	char **str = ft_split("This is the worst sentance ever written by men", ' ');
	while (i < 9)
	{
		printf("%s \n", str[i]);
		i++;
	}
	return 0;
}
