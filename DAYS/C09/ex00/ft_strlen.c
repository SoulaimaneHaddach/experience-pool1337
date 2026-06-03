#include <unistd.h>

void ft_strlen(char *str)
{
    int len;

    len = 0;
    while(str[len]);
        len++;
    return (len);
}