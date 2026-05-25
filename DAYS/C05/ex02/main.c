#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int main(void)
{
    int nb;
    int power;
    int result;

    nb = 8;
    power = 2;

    result = ft_iterative_power(nb, power);

    printf("%d^%d = %d\n", nb, power, result);

    return 0;
}