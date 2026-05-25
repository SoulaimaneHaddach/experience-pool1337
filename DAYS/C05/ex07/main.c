#include <stdio.h>
int ft_is_prime(int nb);

int	ft_find_next_prime(int nb);

int main(void)
{
    int nb;
    int prime;
    int nextprime;

    nb = 4;
    prime = ft_is_prime(nb);
    nextprime = ft_find_next_prime(nb);

    printf("nb : %d\n", nb);
    printf("Prime : %d\n", prime);
    printf("Next Prime : %d\n", nextprime);

    return 0;
}