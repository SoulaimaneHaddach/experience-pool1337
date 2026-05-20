#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    char str[] = "hello";
    int result ;

    result = ft_strlen(str);

    printf("result %d\n" , result );
    
    return (0);
}