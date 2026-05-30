#include <stdlib.h>

char	*ft_strjoin(int argc, char **argv)
{
    char *result;
    int len;
    int i;
    int j;
    int k;

    len = 0;
    i = 1;
    while(i < argc)
    {
        j = 0;
        while(argv[i][j])
        {
            len++;
            j++;
        }
    len++;
    i++;
    }
    result = (char *)malloc(len + 1);
    if(!result)
        return (0);

    k = 0;
    i = 1;
    while(i <  argc)
    {
        j = 0;
        while(argv[i][j])
        {
            result[k] = argv[i][j];
            j++;
            k++;
        }
        result[k]= '\n';
        i++;
        k++; 
    }
    result[k] = '\0';
    return(result);
}