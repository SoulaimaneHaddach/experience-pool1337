#include "ft_stock_str.h"
#include <unistd.h>

static void	ft_putchar(char c)
{
    write(1, &c, 1);
}

static void	ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

static void	ft_putnbr(int nb)
{
    if(nb >= 10)
        ft_putnbr(nb / 10);
    ft_putchar((nb % 10) + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
    int i;
    
    i = 0;
    while(par[i].str != 0)
    {
        ft_putstr(par[i].str);
        ft_putchar('\n');
        ft_putnbr(par[i].size);
        ft_putchar('\n');
        ft_putstr(par[i].copy);
        ft_putchar('\n');
        i++;
    }
}