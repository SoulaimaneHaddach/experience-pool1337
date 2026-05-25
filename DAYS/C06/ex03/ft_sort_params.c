#include <unistd.h>

void	ft_putstr(char *str)
{
    int i;
    
    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    
        return(s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
    int i;
    char *temp;

    i = 1;
    while(i < argc - 1)
    {
        if(ft_strcmp(argv[i], argv[i + 1]) > 0)
        {
            temp = argv[i];
            argv[i] = argv[i + 1];
            argv[i + 1] = temp;
            i = 1;
        }
        else
            i++;
    }
    i = 1;
    while(i < argc)
    {
        ft_putstr(argv[i]);
        i++;
    }
    return(0);
}