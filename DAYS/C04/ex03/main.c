#include <stdio.h>

int	ft_atoi(char *str);

int main(void)
{
    
	printf("%d\n", ft_atoi("1337"));
	printf("%d\n", ft_atoi("-42"));
	printf("%d\n", ft_atoi("  +12"));
	printf("%d\n", ft_atoi("42abc"));
	printf("%d\n", ft_atoi("abc"));
	printf("%d\n", ft_atoi("   -1337abc"));
	printf("%d\n", ft_atoi("  -0012"));
    
    return 0;
}
