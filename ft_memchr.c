
#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	char *str;

	i = 0;
	str = (char *)s;
	while (str && i < n)
	{
		if (*str == c)
			return (str);
		str++;
		i++;
	}
	return (NULL);
}

int main(void)
{
	char str[] = "Bonjour";
	printf("memchr: %s \n", memchr(str, 'B', 9));
	printf("ft_memchr: %s \n", ft_memchr(str, 'B', 9));
	return 0;
}
