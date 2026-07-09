#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int          i;
    unsigned char bit;

    i = 7;
    while( i >= 0)
    {
        bit = (octet >> i) & 1;
        bit += '0';
        write(1, &bit, 1);
        i--;
    }
}