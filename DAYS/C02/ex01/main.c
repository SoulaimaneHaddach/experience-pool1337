#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main (void)
{
    char src[] = "ololololol";
    char dest[11];
    int size;

    size = sizeof(dest) / sizeof(dest[0]);

    ft_strncpy(dest, src, size - 1);
    dest[size - 1] = '\0';

    printf("dest = %s\n", dest);
    
    return 0;
}