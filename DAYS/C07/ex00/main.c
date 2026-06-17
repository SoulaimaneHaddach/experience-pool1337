#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int main(void)
{
    char *copy;

    copy = ft_strdup("hello");
    printf("result : %s\n", copy);
    free(copy);
    return 0;
}