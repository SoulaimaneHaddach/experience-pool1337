#include "ft_stock_par.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

char	*ft_strdup(char *src)
{
    char *dest;
    int len;
    int i;

    len = ft_strlen(src);
    dest = malloc(len + 1);
    if(!dest)
        return (0);
    i = 0;
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}

t_stock_par	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_par	*tab;
	int			i;

	tab = malloc(sizeof(t_stock_par) * (ac + 1));
	if (!tab)
		return (0);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str  = av[i];
		tab[i].copy = ft_strdup(av[i]);
		if (!tab[i].copy)
			return (0);
		i++;
	}
	tab[i].str = 0;
	tab[i].copy = 0;
	tab[i].size = 0;
	return (tab);
}