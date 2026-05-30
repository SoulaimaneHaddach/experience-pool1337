#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int main(void)
{
    int *result;
    int i;
    int min;
    int max;

    min = 3;
    max = 8;

    result = ft_range(min, max);
    i = 0;
    while (i < max - min)
    {
        printf("%d\n" , result[i]);
        i++;
    }

    free(result);
    return 0;
}