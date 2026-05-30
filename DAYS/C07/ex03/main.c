#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int argc, char **argv);

int main(int argc, char **argv)
{
    char *result;

    result = ft_strjoin(argc, argv);\
    if(result)
    {
        printf("%s", result);
        free(result);
    }
    return(0);
}
