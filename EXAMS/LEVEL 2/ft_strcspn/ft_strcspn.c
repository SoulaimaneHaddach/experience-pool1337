#include <unistd.h>

size_t ft_strcspn(const char *s, const char *reject)
{
    int i;
    int j;

    i = 0;
    while(s[1])
    {
        j = 0;
        while(reject[i])
        {
            if(s[i] == reject[j])
                return(i);
            j++;
        }
        i++;
    }
    return(i);
}