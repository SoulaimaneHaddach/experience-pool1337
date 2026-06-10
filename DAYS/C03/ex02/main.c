#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int main(void)
{
    char dest[50] = "hello ";

    printf("dest : %s\n", ft_strcat( dest, "moharej"));

    return 0;
}