#include <stdio.h>
#include "ft_stock_par.h"

t_stock_par *ft_strs_to_tab(int ac, char **av);

int main(int argc, char **argv)
{
	int i = 0;
	t_stock_par *tab;

	tab = ft_strs_to_tab(argc - 1, argv + 1);

	while (tab[i].str)
	{
		printf("str  = %s\n", tab[i].str);
		printf("copy = %s\n", tab[i].copy);
		printf("size = %d\n\n", tab[i].size);
		i++;
	}
}