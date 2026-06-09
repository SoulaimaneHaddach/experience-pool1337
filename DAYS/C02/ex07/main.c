#include <stdio.h>

char	*ft_strupcase(char *str);

int main(void)
{
    char str[] = "soWaLa23imen7";

    printf("before :%s\n" ,  str);
    printf("after  :%s\n" , ft_strupcase(str));

    return 0;
}