/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahmimid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:48:24 by jahmimid          #+#    #+#             */
/*   Updated: 2021/06/02 17:01:44 by jahmimid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strdup(const char *s1)
{
	int i;
	int len;
	char *str;

	len = ft_strlen(s1);
	str = (char *)malloc(size_of(len + 1));
	if (str = NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	return (str);
}
