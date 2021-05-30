#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	char *s1cpy;
	char *s2cpy;

	i = 0;
	s1cpy = (char *)s1;
	s2cpy = (char *)s2;
	while (s1cpy[i] == s2cpy[i] && i < n - 1)
		i++;
	return (s1cpy[i] - s2cpy[i]);
}

int main(void)
{
	char s1[] = "Bonjour";
	char s2[] = "Bonjjour";
	printf("memcmp: %d \n", memcmp(s1, s2, 6));
	printf("ft_memcmp: %d \n", ft_memcmp(s1, s2, 6));
	return 0;
}
