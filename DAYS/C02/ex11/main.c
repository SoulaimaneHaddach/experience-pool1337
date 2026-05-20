#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	printf("\n");
	ft_putstr_non_printable("Hello\tWorld");
	printf("\n");
	ft_putstr_non_printable("abc");
	printf("\n");
}