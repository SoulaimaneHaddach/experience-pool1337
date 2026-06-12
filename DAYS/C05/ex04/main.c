#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	printf("%d\n", ft_fibonacci(-1));
	printf("%d\n", ft_fibonacci(2));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(2));
	printf("%d\n", ft_fibonacci(5));
	printf("%d\n", ft_fibonacci(7));
	return (0);
}