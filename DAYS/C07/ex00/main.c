#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int main(void)
{
    char *result;

    result = ft_strdup("hello");
    printf("result : %s\n", result);
    free(result);
    return 0;
}