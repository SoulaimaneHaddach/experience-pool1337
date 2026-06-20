NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

INCLUDES = -I includes

SRCS =  srcs/ft_putchar.c \
		srcs/ft_strlen.c \
		srcs/ft_swap.c \
		srcs/ft_putstr.c \
		srcs/ft_strcmp.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

srcs/%.o : srcs/%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re