#include <stdio.h>

int ft_strcmp(char *s1 , char *s2);

int main(void)
{
    char str1[] = "allo";
    char str2[] = "alloq";
    int result;

    result = ft_strcmp(str1, str2);

    printf("str1 : %s\n" ,str1);
    printf("str2 : %s\n" ,str2);
    printf("result : %d\n" ,result);

    return 0;
}