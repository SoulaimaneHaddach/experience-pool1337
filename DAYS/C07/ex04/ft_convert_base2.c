#include <unistd.h>
#include <stdlib.h>

int	check_base(char *base)
{
    int i;
    int j;
    int len;

    len = 0;
    while(base[len])
        len++;
    if (len < 2)
        return(0);
    i = 0;
    while(base[i])
    {
        if(base[i] == '+' || base[i] == '-'
            || base[i] == ' ' || base[i] == '\t'
            || base[i] == '\n' || base[i] == '\r'
            || base[i] == '\v' || base[i] == '\f')
            return(0);
    j = i + 1;
    while(base[j])
            {
                if(base[i] == base[j])
                    return(0);
                j++;
            }
            i++;
    }
    return(len);
}

int	char_index(char c, char *base)
{
    int i;
    
    i = 0;
    while(base[i])
    {
        if(base[i] == c)
        return(i);
    i++;
    }
    return(-1);
}

long	ft_atoi_base(char *str, char *base)
{
    int nbase;
    int sign;
    long result;
    int i;
    int index;
    
    nbase = check_base(base);
    if(nbase < 2)
        return(0);
    i = 0;
    sign = 1;
    result = 0;
    while(str[i] == ' ' || str[i] == '\t'
        || str[i] == '\n' || str[i] == '\r'
        || str[i] == '\v' || str[i]== '\f')
        i++;
    while(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        sign *= -1;
    i++;
    }
    index = char_index(str[i], base);
    while(str[i] && index != -1)
    {
        result = result * nbase + index;
        i++;
        index = char_index( str[i], base); 
    }
    return(result * sign);
}

int	int_len(long nbr, int nbase)
{
    int len;

    len = 0;
    if(nbr <= 0)
        len = 1;
    while(nbr != 0)
    {
        nbr/= nbase;
        len++;
    }
    return(len);
}

void	fill_result(char *result, long nbr, char *base, int nbase, int len)
{
    int i;

    i = len -1;
    if (nbr < 0)
    {
        result[0] = '-';
        nbr = -nbr;
    }
    if(nbr == 0)
        result[0] = base[0];
    while(nbr > 0)
    {
        result[i] = base[nbr % nbase];
        nbr /= nbase;
        i--;
    }
    result[len]= '\0';
}