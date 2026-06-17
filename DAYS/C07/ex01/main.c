#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int main(void)
{
    int *result;
    int i;
    int min;
    int max;
    int size;

    min = 5;
    max = 1;
    size = max - min;
    result = ft_range(min, max);
    i = 0;
    while (i < size)
    {
        printf("%d " , result[i]);
        i++;
    }
    free(result);
    return 0;
}