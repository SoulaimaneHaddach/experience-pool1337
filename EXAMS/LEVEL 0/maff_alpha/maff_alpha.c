#include <unistd.h>

int main(void)
{
    int i;
    int c;

    i = 97;
    while (i <= 122)
    {
        if(i % 2 == 0)
            c = i - 32;
        else
            c = i;
        write(1, &c, 1);
        i++;
    }
    write(1, "\n", 1);
    return(0);
}