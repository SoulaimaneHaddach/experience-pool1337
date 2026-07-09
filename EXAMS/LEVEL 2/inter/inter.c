#include <unistd.h>

int is_in(char c, char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] == c)
            return(1);
        i++;
    }
    return(0);
}

int main(int argc, char **argv)
{
    int i;
    int j;

    if( argc != 3)
    {
        write(1, "\n", 1);
        return(0);
    }
    i = 0;
    while(argv[1][i])
    {
        j = 0 ;
        while(j < i && argv[1][j] != argv[1][i])
            j++;
        if(j == i && is_in(argv[1][i], argv[2]))
            write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return(0);
}