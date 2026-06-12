#include <stdio.h>
int ft_is_prime(int nb);

int	ft_find_next_prime(int nb);

int main(void)
{
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(4));
	printf("%d\n", ft_find_next_prime(7));
	printf("%d\n", ft_find_next_prime(14));
    return 0;
}