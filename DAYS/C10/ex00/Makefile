NAME = ft_display_file
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) display_file.C -o $(NAME)

clean: 
	rm -f display_file.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re