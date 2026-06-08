#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{
    int a;
    int b;

    a = 1;
    b = 2;

    printf("before swap : a = %d  b = %d\n", a, b);
    ft_swap(&a, &b);
    printf("after swap  : a = %d  b = %d\n", a, b);
    return(0);
}