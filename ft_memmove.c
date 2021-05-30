#include <stdio.h>
#include <string.h>

/*void *memmove(void *dest, const void *src, size_t n)
{
	
}*/

int main(void)
{
	char src[] = "Bonjour";
	char dest[] = "";
	printf("memmove: %s \n", memmove(dest, src, 5));
	return (0);
}
