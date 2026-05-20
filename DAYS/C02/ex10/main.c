#include <stdio.h>

unsigned int ft_strlcpy	(char *dest, char *src, unsigned int size);

int main(void)
{
    char	src[] = "42137iokje";
	char	dest[5];
	unsigned int	result;

	result = ft_strlcpy(dest, src, 5);

	printf("Source      : %s\n", src);
	printf("Destination : %s\n", dest);
	printf("Return      : %u\n", result);

	return (0);
}