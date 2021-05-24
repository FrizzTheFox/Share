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

/*char	*ft_strchr(const char *s, int c)
{
	
}*/

int	main(void)
{
	char str[] = "Bonjour";
	printf("strchr: %s \n", strchr(str, 'j'));
	return 0;
}
