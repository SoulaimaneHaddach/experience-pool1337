#include <unistd.h>

void ft_rev_int_tab ( int *tab, int size )
{
    int i = 0:
    int temp ;

    while ( i < size / 2)
    {
        temp = tap[i];
        tap[i] = tap[size - 1 - i];
        tap[ size - 1 - i] = temp;
        i++
    }
}

