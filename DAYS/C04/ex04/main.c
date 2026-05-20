#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ft_putnbr_base(1337, "0123456789");
	printf("\n");
	ft_putnbr_base(1337, "01");
	printf("\n");
	ft_putnbr_base(1337, "0123456789ABCDEF");
	printf("\n");
	ft_putnbr_base(-1337, "0123456789");
	printf("\n");
	ft_putnbr_base(1337, "poneyvif");
	printf("\n");
	ft_putnbr_base(1337, "0+123456789");
	printf("\n");
	ft_putnbr_base(1337, "0");
	printf("\n");
	ft_putnbr_base(1337, "00123456789");
	printf("\n");
	return (0);
}