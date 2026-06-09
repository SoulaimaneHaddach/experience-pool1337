#include <stdio.h>

int	ft_str_is_printable(char *str);

int main (void)
{
    printf("%d\n" , ft_str_is_printable("\x01Hello"));
    printf("%d\n" , ft_str_is_printable("u"));
    printf("%d\n" , ft_str_is_printable("7"));
    printf("%d\n" , ft_str_is_printable("()"));
    printf("%d\n" , ft_str_is_printable("\t"));

    return 0;
}