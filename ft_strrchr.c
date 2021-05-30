#include <stdio.h>
#include <string.h>

char	*ft_strrchr(char *s, int c)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	s++;
	i++;
	while (s && i > 0)
	{
		if (*s == c)
			return (s);
		s--;
		i--;
	}
	return (NULL);
}

int	main(void)
{
	char str[] = "BonjourJeM'appelleJawad";
	printf("strrchr: %s \n", strrchr(str, 'J'));
	printf("ft_strrchr: %s \n", ft_strrchr(str, 'J'));
	return 0;
}
