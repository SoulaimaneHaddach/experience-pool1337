#include <stdlib.h>

int	*ft_range(int min, int max)
{
    int i;
    int *arr;
    int size;

    if(min >= max)
        return(0);
    size = max - min;
    arr = malloc(size * sizeof(int));
    if(!arr)
        return(0);
    i = 0;
    while (i < size)
    {
        arr[i] = min + i;
        i++;
    }
    return (arr);
}