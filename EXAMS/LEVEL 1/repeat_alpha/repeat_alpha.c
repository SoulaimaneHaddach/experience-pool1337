#include <unistd.h>

int get_index(char c)
{
    if( c >= 'a' && c <= 'z')
        return(c - 'a' + 1);
    else if( c >= 'A' && c <= 'Z')
        return(c - 'Z' + 1);
    return(1);
}

int main(int argc, char **argv)
{
    int i;
    int j;
    
    if(argc != 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    i = 0;
    while(argv[1][i])
    {
        j = get_index(argv[1][i]);
        while(j > 0)
        {
            write(1, &argv[1][i], 1);
            j--;
        }
        i++;
    }
    write(1, "\n", 1);
    return(0);
}