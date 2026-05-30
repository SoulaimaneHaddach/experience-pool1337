#include <stdlib.h>

int	*ft_range(int min, int max)
{
    int *arr;
    int i;

    if(min >= max)
        return (0);

    arr = (int*)malloc((max - min ) * (sizeof(int)));
    if(!arr)
        return (0);

    i = 0;
    while (min < max)
    {
        arr[i] = min;
        i++;
        min++;
    }
    return (arr);
}