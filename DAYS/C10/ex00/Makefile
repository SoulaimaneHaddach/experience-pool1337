NAME = ft_display_file

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME):
	$(CC) $(CFLAGS) display_file.c -o $(NAME)

clean:
	rm -f $(NAME)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re