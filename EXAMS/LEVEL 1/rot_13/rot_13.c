#include <unistd.h>

static int rot_char(char c)
{
    if(c >= 'a' && c <= 'm' || c >= 'A' && c <= 'M')
        return(c + 13);
    else if (c >= 'n' &&  c <= 'z' || c >= 'N' && c <= 'Z')
        return(c - 13);
    return(c);
}

int main(int argc, char **argv)
{
    int i;
    int c;

    if(argc != 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    i = 0;
    while(argv[1][i])
    {
        c = rot_char(argv[1][i]);
        write(1, &c, 1);
        i++;
    }
    write(1, "\n", 1);
    return(0);
}