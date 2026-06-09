#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main(void)
{
    char src[] = "hy";
    char dest[50];

    printf("dest before : %s\n", dest);
    ft_strcpy(dest, src);
    printf("dest after  : %s\n", dest);
    
    return 0;
}