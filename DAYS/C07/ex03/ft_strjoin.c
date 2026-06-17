#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int len;
    
    len = 0;
    while(str[len])
        len++;
    return(len);
}

char	*ft_strjoin(int argc, char **argv)
{
    int len;
    char *arr;
    int i;
    int j;
    int k;
    
    len = 0;
    i = 1;
    while(i < argc)
    {
        len += ft_strlen(argv[i]) + 1;
        i++;
    }
    arr = malloc((len + 1) * sizeof(char));
    if (!arr)
        return(0);
    i = 1;
    k = 0;
    while(i < argc)
    {
        j = 0;
        while(argv[i][j])
        {
            arr[k] = argv[i][j];
            k++;
            j++;
        }
        arr[k] = '\n';
        k++;
        i++;
    }
    arr[k] = '\0';
    return(arr);
}