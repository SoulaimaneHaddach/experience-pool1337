#include "ft_point.h"
#include <stdio.h>

void set_point( t_point *point)
{
	point -> x = 42;
	point -> y = 1337;
}

int	main(void)
{
	t_point	point = {0,0};

	printf("x = %d\n", point.x);
	printf("y = %d\n", point.y);

	set_point(&point);
	
	printf("x = %d\n", point.x);
	printf("y = %d\n", point.y);
	return (0);
}