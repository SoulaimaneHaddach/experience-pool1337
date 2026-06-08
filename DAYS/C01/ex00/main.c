#include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{
    int x;

    x = 0;

    printf("before : %d\n", x);
    ft_ft(&x);
    printf("after  : %d\n", x);

    return(0);
}