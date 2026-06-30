#include <unistd.h>

static int rot_char(char c)
{
    if(c == 'z')
        return('a');
    if(c == 'Z')
        return('A');
    if(c >= 'a' && c <= 'y')
        return(c + 1);
    if(c >= 'A' && c <= 'Y')
        return(c + 1);
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