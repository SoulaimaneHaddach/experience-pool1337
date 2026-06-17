#include <stdlib.h>

int     check_base(char *base);
long    ft_atoi_base(char *str, char *base);
int     int_len(long nbr, int nbase);
void    fill_result(char *result, long nbr, char *base, int nbase, int len);

char    *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    int     nbase_from;
    int     nbase_to;
    long    n;
    int     len;
    char    *result;

    nbase_from = check_base(base_from);
    nbase_to = check_base(base_to);
    if (!nbase_from || !nbase_to)
        return (NULL);
    n = ft_atoi_base(nbr, base_from);
    len = int_len(n, nbase_to);
    result = malloc(sizeof(char) * (len + 1));
    if (!result)
        return (NULL);
    fill_result(result, n, base_to, nbase_to, len);
    return (result);
}