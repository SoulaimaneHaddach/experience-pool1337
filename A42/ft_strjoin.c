#include <stdlib.h>
int ft_strlen(char *str)
{
    int len;

    len = 0;
    while(str[len])
        len++;
    return(len);
}
int total_len(int size, char **strs, char *sep)
{
    int i;
    int total;

    i = 0;
    total = 0;
    while(i < size)
    {
        total += ft_strlen(strs[i]);
        if(i < size - 1)
            total += ft_strlen(sep);
        i++;
    }
    return(total);
}
void ft_fill_join(char *result, int size, char **strs, char *sep)
{
    int i;
    int j;
    int pos;


    i = 0;
    pos = 0;
    while(i < size)
    {
        j = 0;
        while(strs[i][j])
            result[pos++] = strs[i][j++];
        if(i < size -1)
        {
            j = 0;
            while(sep[j])
                result[pos++] = sep[j++];
        }
        i++;
    }
    result[pos] = '\0';
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    char *result;
    int   total;

    if(size == 0)
    {
        result = malloc(1);
        if(!result)
            return(NULL);
        result[0] = '\0';
        return(result);
    }
    total = total_len(size, strs, sep);
    result = malloc(total + 1);
    if(!result)
        return(NULL);
    ft_fill_join(result, size, strs, sep);
    return(result);
}
