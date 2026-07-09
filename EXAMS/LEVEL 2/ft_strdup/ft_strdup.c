#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while(str[str])
        len++;
    return(len);
}

char *ft_strdup(char *src)
{
    int i;
    int len;
    char *dest;

    len = ft_strlen(src);
    dest = malloc(len + 1);
    if(!dest)
        return(0);
    i = 0;
    while(src[i])
    {
        dest[i] = src[i];
        i++; 
    }
    dest[i] = '\0';
    return(dest);
}