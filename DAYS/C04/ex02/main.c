#include <stdio.h>

void ft_putchar(char c);
void ft_putnbr(int nb);

int main(void)
{
    ft_putnbr(1337);
    ft_putchar('\n');

    ft_putnbr(-42);
    ft_putchar('\n');

    ft_putnbr(0);
    ft_putchar('\n');

    ft_putnbr(-2147483648);
    ft_putchar('\n');

    return 0;
}