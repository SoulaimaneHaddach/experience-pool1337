#include <stdio.h>

unsigned int ft_strlcpy	(char *dest, char *src, unsigned int size);

int main(void)
{
	char dest[10];

	printf("%u\n", ft_strlcpy(dest, "hello", 10));
	printf("%s\n", dest);
	printf("%u\n", ft_strlcpy(dest, "hello", 4));
	printf("%s\n", dest);

	return (0);
}