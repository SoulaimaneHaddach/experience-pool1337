#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb);

int main(void)
{
    char dest[50] = "solay";
    char src[]  = "manokwd";
    int nb;

    nb = 3;
    printf("before : %s\n" ,dest);

    ft_strncat( dest, src , nb);

    printf("after : %s\n" ,dest);

    return 0;
}