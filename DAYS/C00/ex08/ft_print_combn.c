#include <unistd.h>

void ft_putchar (char c);
void ft_print_combn (int n)
{
	int arr[10];
	int i;
	
	i = 0;
	while( i < n)
	{
		arr[i] = i;
		i++;
	}
	while ( arr[0] <= 10 - n)
	{
		i = 0;
		while( i < n)
		{
			ft_putchar(arr[i] + '0');
			i++;
		}
		if ( arr[0] < 10 - n)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		i = n - 1;
		arr[i]++;
		while( i > 0 && arr[i] > 9 - (n - 1 - i))
	{
		i--;
		arr[i]++;
	}
	    while( i < n - 1)
		{
			arr[i+1] = arr[i] + 1;
			i++;
		}
	}

}