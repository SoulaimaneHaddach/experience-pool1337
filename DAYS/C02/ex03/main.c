#include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
    printf("%d\n" ,ft_str_is_numeric("12"));
    printf("%d\n" ,ft_str_is_numeric("ad"));
    printf("%d\n" ,ft_str_is_numeric(""));

    return 0;
}