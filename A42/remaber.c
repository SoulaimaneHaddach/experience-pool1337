#include <unistd.h>
void ft_putchar (char c);
void remaber (int n)
{
    if ( n < 0)
    ft_putchar ('N');
    else 
    ft_putchar ('P');
}