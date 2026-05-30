#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int size;

    if (min >= max)
        {
            *range = 0;
            return (0);
        }
    size = max - min;
    *range = (int *)malloc(size * sizeof(int));
    if(!*range)
        return(0);

        i = 0;
        while( min < max)
        {
            (*range)[i] = min;
            i++;
            min++;
        }
    return(size);
}