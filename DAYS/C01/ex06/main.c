#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    char *word;

    word ="hello";
    printf("count : %d\n", ft_strlen(word));
    return(0);
}