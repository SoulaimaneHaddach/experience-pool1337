#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
    int *result;
    int size;
    int i;
    int min;
    int max;

    min = 2;
    max = 6;

    size = ft_ultimate_range(&result, min, max);
    printf("range : %d\n", size);
    i = 0;
    while(i < size)
    {
        printf("%d ", result[i]);
        i++;
    }
    free(result);
    return 0;
}