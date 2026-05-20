#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
    int n;
    char s1[] = "abdcc3e";
    char s2[] = "abccc3e";
    int result;
    
    n = 3;
    result = ft_strncmp(s1 ,s2 ,n);

    printf("s1 : %s\n" ,s1);
    printf("s2 : %s\n" ,s2);
    printf("result : %d\n" ,result);

    return 0;
}