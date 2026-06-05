#include <unistd.h>

void ft_putchar_(char c)
{
    write(1, &c, 1);
}