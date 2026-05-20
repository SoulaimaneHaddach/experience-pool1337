#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main (void)
{
    char src[] =  "okey";
    char dest[50];

    ft_strcpy(dest, src);

    printf("src = %s\n" , src);
    printf("dest = %s", dest);
    
    return 0;
}