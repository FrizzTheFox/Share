/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahmimid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:45:59 by jahmimid          #+#    #+#             */
/*   Updated: 2021/05/20 14:57:16 by jahmimid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

int                    main(void)
{
    printf("Expected : %d\nResult   : %d\n=============\n", strncmp("a", "b", 1), ft_strncmp("a", "b", 1));
    printf("Expected : %d\nResult   : %d\n=============\n", strncmp("b", "a", 1), ft_strncmp("b", "a", 1));
    printf("Expected : %d\nResult   : %d\n=============\n", strncmp("a", "z", 1), ft_strncmp("a", "z", 1));
    printf("Expected : %d\nResult   : %d\n=============\n", strncmp("A", "a", 1), ft_strncmp("A", "a", 1));
    printf("Expected : %d\nResult   : %d\n=============\n", strncmp("a", "A", 1), ft_strncmp("a", "A", 1));
    printf("Expected : %d\nResult   : %d\n=============\n", strncmp("a", "a", 1), ft_strncmp("a", "a", 1));
    printf("Expected : %d\nResult   : %d\n=============\n", strncmp("", "", 1), ft_strncmp("", "", 1));
    printf("Expected : %d\nResult   : %d\n=============\n", strncmp("abbbb", "baaaa", 2), ft_strncmp("abbbb", "baaaa", 2));
    printf("Expected : %d\nResult   : %d\n=============\n", strncmp("aaaab", "aaaac", 2), ft_strncmp("aaaab", "aaaac", 2));
    printf("Expected : %d\nResult   : %d\n=============\n", strncmp("aaaaz", "aaaac", 5), ft_strncmp("aaaaz", "aaaac", 5));
    return 0;
}

int	main(void)
{
	char s1[] = "a";
	char s2[] = "z";
	printf("ft_strncmp: %d \n", ft_strncmp("a", "z", 1));
	printf("strncmp: %d \n", strncmp("a", "z", 1));
	return 0;
}
