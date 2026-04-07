#include <unistd.h>

int ft_strlen( char *str)
{
    int count = 0 ;
    while( *str != '\0' )
    {
        count++;
        str++;
    }
    return count;
}

