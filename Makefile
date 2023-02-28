FLAGS = -Wall -Wextra -Werror
NAME =    libft.a
SRC =    ft_strlen.c

OBJS = $(SRC:.c=.o)

all: $(NAME)

%o: %c
    gcc $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
    ar -rcs $(NAME) $(OBJS)

clean: 
    rm -f $(OBJS)

fclean: clean
        rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re