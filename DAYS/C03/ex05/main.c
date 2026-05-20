#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
    char dest[10] = "solayan";
    char src [] = "kls";
    unsigned int result;

    printf("before : %s\n" ,dest);

    result = ft_strlcat(dest, src ,10);

    printf("after : %s\n" ,dest);
    printf("result :  %u\n" ,result);

    return 0;
}