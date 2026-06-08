#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main (void)
{
    int tab[] = {1, 2, 3, 4};
    int size = 4;
    int i;

    ft_rev_int_tab( tab , size);

    i = 0;
    while(i < size)
    {
        printf("%d " , tab[i]);
            i++;
    }
    return 0;
}