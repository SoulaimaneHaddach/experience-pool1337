#include <unistd.h>

void    ft_print_combn(int n)
{
    int     arr[10];
    int     i;
    char    c;

    if (n <= 0 || n >= 10)
        return;
    i = 0;
    while (i < n)
    {
        arr[i] = i;
        i++;
    }
    while (arr[0] <= 10 - n)
    {
        i = 0;
        while (i < n)
        {
            c = arr[i] + '0';
            write(1, &c, 1);
            i++;
        }
        if (arr[0] != 10 - n)
            write(1, ", ", 2);
        i = n - 1;
        arr[i]++;
        while (i > 0 && arr[i] > 9 - (n - 1 - i))
        {
            i--;
            arr[i]++;
        }
        while (i < n - 1)
        {
            arr[i + 1] = arr[i] + 1;
            i++;
        }
    }
}

int main(void)
{
    ft_print_combn(2);
    write(1, "\n", 1);
    return  (0);
}