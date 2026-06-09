#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int main(void)
{
    printf("%d\n", ft_str_is_uppercase("HELLO"));
	printf("%d\n", ft_str_is_uppercase("Hello"));
	printf("%d\n", ft_str_is_uppercase("hello123"));
	printf("%d\n", ft_str_is_uppercase(""));
    
    return 0;
}