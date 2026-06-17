#include <stdlib.h>
#include <unistd.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int *arr;
    int size;

    if(min >= max)
    {
        *range = NULL;
        return(0);
    }
    size = max - min;
    arr = malloc(size * sizeof(int));
    if(!arr)
    {
        *range = NULL;
        return(0);
    }
    i = 0;
    while(i < size)
    {
        arr[i] = min + i;
        i++;
    }
    *range = arr;
    return(size);
}