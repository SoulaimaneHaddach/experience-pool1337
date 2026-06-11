#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putnbr(int nb)
{
    long n;
    n = nb;
    if(n == -2147483648)
    {
        ft_putchar('-');
        ft_putnbr(214748364);
        ft_putchar('8');
            return;
    }
    if(n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    if( n >= 10)
        ft_putnbr(n / 10);
    ft_putchar(n % 10 + '0');
}