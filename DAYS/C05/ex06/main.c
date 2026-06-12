#include <stdio.h>

int	ft_is_prime(int nb);

int main(void)
{
    printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(4));
	printf("%d\n", ft_is_prime(8));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(0));

    return 0;
}