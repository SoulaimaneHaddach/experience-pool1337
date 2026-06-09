#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

void	ft_putstr_non_printable(char *str)
{
    int i;
    unsigned char c;

    i = 0;
    while(str[i])
    {
        c = (unsigned char)str[i];
        if(c >= 32 && c <= 126)
            ft_putchar(c);
        else
        {
            ft_putchar('\\');
            ft_putchar("0123456789abcdef"[c / 16]);
            ft_putchar("0123456789abcdef"[c % 16]);
        }
        i++;
    }
}