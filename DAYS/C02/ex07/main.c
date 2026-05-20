#include <stdio.h>

char	*ft_strupcase(char *str);

int main(void)
{
    char str[] = "soualaimen21";

    printf("before :%s\n" ,  str);
    printf("after  :%s\n" , ft_strupcase(str));

    return 0;
}