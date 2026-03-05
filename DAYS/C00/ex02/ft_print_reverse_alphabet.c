#include <unistd.h>
void ft_putchar(char c);
void ft_print_reverse_alphabet(void)
{
    char cont;
    cont ='z';
    
        while( cont >='a')
        {
            ft_putchar(cont);
            cont--;
        }
}