#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
    char str[50] = "solauymane hadat 42";
    char to_find[] = "mane";
    char *result;


    printf("str : %s\n" ,str);
    printf("to_find : %s\n" ,to_find);

    result= ft_strstr(str ,to_find);

    printf("result : %s\n" , result);

    return 0;
}