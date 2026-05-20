#include <stdio.h>

void ft_putchar(char c);
void	ft_putstr(char *str);

int main(void)
{
    char str[] = "allo salam";

    ft_putstr(str);
    ft_putchar('\n');
    ft_putstr(str);
    return 0;
}