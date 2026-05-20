#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
    int i;
    int j;
    int len;

    len =0;
    while(base[len])
    len++;

    if(len < 2)
        return 0;

    i = 0;
    while(base[i])
    {
        if(base[i] == '-' || base[i] == '+')
            return (0);
    j = i + 1;
    while(base[j])
    {
        if(base[i] == base[j])
            return (0);
        j++;
    }
        i++;
    }
    return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
    int nbase;
    int n;

    nbase = check_base(base);
    if(nbase < 2)
    return ;

    n = nbr;
    if(n < 0)
    {
        ft_putchar('-');
        n = -n ;
    }
    if( n >= nbase )
        ft_putnbr_base(n / nbase , base);
    ft_putchar(base[ n % nbase]);
}