#include <unistd.h>

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while(str[len])
        len++;
    return(len);
}

char    *ft_strrev(char *str)
{
    int i;
    int j;
    int len;
    int temp;

    len = ft_strlen(str);
    if(!len)
        return(str);
    i = 0;
    j = len - 1;
    while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return(str);
}