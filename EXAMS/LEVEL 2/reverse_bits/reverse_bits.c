#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
    int i;
    unsigned char result;

    i = 7;
    result = 0;
    while(i >= 0)
    {
        result = result << 1;
        result = result | (octet & 1);
        octet  = octet >> 1;
    }
    return(result);
}