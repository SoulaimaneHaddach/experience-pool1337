#include <stdio.h>

	char	*ft_strlowcase(char *str);

    int main(void)
    {
        char str[] = "ASDFGV55";

        printf("before : %s\n" , str );
        printf("after  : %s\n", ft_strlowcase(str));

        return 0;
    }