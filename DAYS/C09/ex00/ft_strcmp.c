#include <unistd.h>

void ft_strcmp(char *s1 , char *s2)
{
    int i;

    i =0;
    while(str[s1] && str[s2] && str[s1] == str[s2])
        i++;
    return (str[s1] - str[s2]);
}