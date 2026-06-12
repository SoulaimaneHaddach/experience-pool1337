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
    while(s1[i] && s1[i] && s1[i] == s2[i])
        i++;
    return(s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
    int i;
    int j;
    char *temp;
    
    i = 1;
    while(i < argc - 1)
    {
        j = 0;
        while(j < argc -1)
        {
            if(ft_strcmp(argv[j], argv[j + 1]) > 0)
            {
                temp = argv[j];
                argv[j] = argv[j + 1];
                argv[j + 1] = temp;
            }
            j++;
        }
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