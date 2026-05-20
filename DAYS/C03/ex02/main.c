#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int main(void)
{
    char dest[50] = "hello ";
    char src[]  = "moharej";


    printf("before   : %s\n"  ,dest);

    ft_strcat( dest ,src);
    
    printf("after    : %s\n"  ,dest);


    return 0;
}