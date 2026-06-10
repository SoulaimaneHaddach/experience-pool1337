#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb);

int main(void)
{
    char dest[50] = "hello ";


    printf("dest : %s\n" ,ft_strncat( dest, "world" , 5));

    return 0;
}