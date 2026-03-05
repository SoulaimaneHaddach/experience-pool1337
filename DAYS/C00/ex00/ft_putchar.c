#include <unistd.h>
void ft_putchar(char m)
{
    write( 1 , &m , 1);
}
