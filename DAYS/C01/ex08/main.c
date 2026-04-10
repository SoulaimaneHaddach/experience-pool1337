#include <stdio.h>

void ft_sort_int_tab( int *tab , int size);

int main(void)
{
    int arr[] = {3, 2, 4, 1, 5};
    int size ;
    int i ;

    size = sizeof(arr) /sizeof(arr[i]);

    ft_sort_int_tab(arr ,size);

    i = 0 ;
    while(i < size)
    {
        printf("%d" , arr[i]);
        i++;
    }
    return 0 ;
}