#include <stdio.h>

int	ft_str_is_printable(char *str);

int main (void)
{
    printf("%d\n" , ft_str_is_printable("\x01Hello"));
    return 0;
}