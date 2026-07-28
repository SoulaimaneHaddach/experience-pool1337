#include <unistd.h>

int ft_atoi(char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while(str[i] == ' ' || str[i] == '\t' ||
            str[i] == '\n' || str[i] == 'r' ||
            str[i] == '\f' || str[i] == '\v' )
            i++;
    while(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign = -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return(result * sign);
}

#include <stdio.h>

int main()
{
    printf("%d\n", ft_atoi(" ---+--+1234ab567"));
    return(0);
}