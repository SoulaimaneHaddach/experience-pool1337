#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
    unsigned int i ;
    
    i = 0;
    while(str[i])
    i++;

    return (i);
}
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int dest_len;
    unsigned int src_len;
    unsigned int i;
    unsigned int j;
    
    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);

    if( size == 0 )
    return (src_len);

    if(size <= dest_len)
    return (size + src_len);

    i = dest_len;
    j = 0;
    while(src[j] && i < size -1)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    
    return (dest_len + src_len);
}
// with out strlen 
// 	dest_len = 0;
// 	while (dest[dest_len])
// 		dest_len++;

// 	src_len = 0;
// 	while (src[src_len])
// 		src_len++;