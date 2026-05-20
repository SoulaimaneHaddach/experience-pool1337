#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str1[] = "salut, comment tu vas ?";
	char	str2[] = "1337mots quarante-deux";
	char	str3[] = "hello world";
	char	str4[] = "HELLO WORLD";
	char	str5[] = "hello+world-test";

	printf("Test 1: %s\n", ft_strcapitalize(str1));
	printf("Test 2: %s\n", ft_strcapitalize(str2));
	printf("Test 3: %s\n", ft_strcapitalize(str3));
	printf("Test 4: %s\n", ft_strcapitalize(str4));
	printf("Test 5: %s\n", ft_strcapitalize(str5));
	return (0);
}