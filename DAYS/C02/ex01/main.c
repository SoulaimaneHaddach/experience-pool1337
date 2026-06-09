#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main (void)
{
    char dest1[10];
    char dest2[10] = {0};
    char dest3[10] = {0};

	ft_strncpy(dest1, "abc", 6);
	ft_strncpy(dest2, "abcdefgh", 6);
	ft_strncpy(dest3, "abc", 3);

    printf("case1 : %s\n", dest1);
    printf("case2 : %s\n", dest2);
    printf("case3 : %s\n", dest3);
    
    return 0;
}