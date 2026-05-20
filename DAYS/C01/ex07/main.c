#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main (void)
{
    int arr[] = {1,2,3,4};
    int i = 0;
    int size = 4;

    ft_rev_int_tab( arr , size);

    for ( i = 0; i < size; i++ )
    {
        printf("%d " , arr[i]);

    }
    return 0;
}