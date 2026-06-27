#include <unistd.h>

int main(void)
{
    int i;
    int c;

    i = 122;
    while(i >= 97)
    {
        if(i % 2 == 1)
            c = i - 32;
        else
            c = i;
        write(1, &c, 1);
        i--;
    }
    write(1, "\n", 1);
    return(0);
}