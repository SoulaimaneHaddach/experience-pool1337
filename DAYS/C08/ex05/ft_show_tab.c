#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
    int i;
    
    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
    if(nb >= 10)
        ft_putnbr(nb / 10);
    write(1, &"123456789"[nb % 10], 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
    int i = 0;
    while(par[i].str != 0)
    {
        ft_putstr(par[i].str);
        ft_putnbr(par[i].size);
        write(1, "\n", 1);
        ft_putstr(par[i].copy);
        i++;
    }
}