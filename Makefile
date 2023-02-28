# FLAGS = -Wall -Wextra -Werror
# NAME =    libft.a
# SRC =    ft_strlen.c

# OBJS = $(SRC:.c=.o)

# all: $(NAME)

# %o: %c gcc $(FLAGS) -c $< -o $@

# $(NAME): $( OBJS)   ar -rcs $(NAME) $(OBJS)

# clean:  rm -f $(OBJS)

# fclean: clean rm -f $(NAME)

# re: fclean all

# .PHONY: clean fclean all re

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES = ft_strlen


SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))


.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re