#include <unistd.h>

int	ft_sqrt(int nb)
{
    int i;

    if(nb < 0)
    return (0);

    if(nb == 0)
    return (0);

    i = 1;
    while( i * i <= nb)
    {
        if( i * i == nb)
        return (i);
    i++;
    }
    return(0);
}