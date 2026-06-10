#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
    char str[50] = "solauymane hadat 42";
    char to_find[] = "all";


    printf("str : %s\n" ,str);
    printf("to_find : %s\n" ,to_find);

    printf("result : %s\n" , ft_strstr(str ,to_find));

    return 0;
}