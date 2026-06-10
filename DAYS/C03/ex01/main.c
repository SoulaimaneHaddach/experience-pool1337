#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
    printf("case 1 : %d\n" ,ft_strncmp("abc", "abc" ,3));
    printf("case 2 : %d\n" ,ft_strncmp("abdcf", "absdf" ,2));
    printf("case 3 : %d\n" ,ft_strncmp("abd", "agd", 2));

    return 0;
}