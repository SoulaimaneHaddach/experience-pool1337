#include <stdio.h>

	int	ft_str_is_lowercase(char *str);

    int main(void)
    {
    printf("%d\n", ft_str_is_lowercase("hello"));
	printf("%d\n", ft_str_is_lowercase("Hello"));
	printf("%d\n", ft_str_is_lowercase("hello123"));
	printf("%d\n", ft_str_is_lowercase(""));

        return 0 ;
    }