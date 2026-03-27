#include <unistd.h>

void ft_putchar (char c);
void ft_putnbr ( int nbr)
{
    if ( nbr == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
    }
    if (nbr < 0)
    {
        ft_putnbr('-');
        nbr = -nbr;
    }
    if (nbr >= 10 )
    {
        ft_putnbr( nbr / 10);
    }
    ft_putchar( nbr % 10 + '0');
}
