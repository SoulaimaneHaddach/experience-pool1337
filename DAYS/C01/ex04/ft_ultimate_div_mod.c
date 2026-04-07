#include <unistd.h>

void ft_ultimate_div_mod(int *a ,*b)
{
    int temp ;
    temp = *a ;
    *a = temp / *b ;
    *b = temp % *b ;
}