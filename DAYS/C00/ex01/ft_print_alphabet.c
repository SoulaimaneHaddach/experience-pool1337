#include <unistd.h>
void ft_putchar (char c);
void ft_print_alphabet (void)
{
    char cont ;
    cont = 'a';
    while( cont <= 'z')
    {
        ft_putchar(cont);
        cont++;
    }
}