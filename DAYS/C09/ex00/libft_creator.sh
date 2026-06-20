gcc -wall -wextra -werror ft_putchar.c
gcc -wall -wextra -werror ft_putstr.c
gcc -wall -wextra -werror ft_swap.c
gcc -wall -wextra -werror ft_strlen.c
gcc -wall -wextra -werror ft_strcmp.c

ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

ranlib libft.a