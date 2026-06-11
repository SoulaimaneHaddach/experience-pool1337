#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int main(void)
{
	printf("%d\n", ft_atoi_base("539", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("1337", "0123456789"));
	printf("%d\n", ft_atoi_base("nyfo", "poneyvif"));
	printf("%d\n", ft_atoi_base("11", "01"));
	printf("%d\n", ft_atoi_base("539", "0+123456789"));

	return 0;
}