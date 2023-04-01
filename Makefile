# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sphimsir <sphimsir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 11:09:33 by sphimsir          #+#    #+#              #
#    Updated: 2023/04/01 13:32:32 by sphimsir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES = ft_split \
		ft_strtrim \
		ft_putnbr_fd \
		ft_putendl_fd \
		ft_putstr_fd \
		ft_putchar_fd \
		ft_striteri \
		ft_strlen \
		ft_strlcpy \
		ft_strlcat \
		ft_strdup \
		ft_tolower \
		ft_toupper \
		ft_isalpha \
		ft_isdigit \
		ft_isprint \
		ft_isascii \
		ft_isalnum \
		ft_calloc \
		ft_strchr \
		ft_strrchr \
		ft_bzero \
		ft_atoi \
		ft_strncmp \
		ft_strnstr \
		ft_memset \
		ft_memcpy \
		ft_memmove\
		ft_memchr \
		ft_memcmp \
		ft_itoa \
		ft_substr \
		ft_strjoin \
		ft_strmapi

FILES_BONUS =	ft_lstnew \
				ft_lstadd_front \
				ft_lstsize \
				ft_lstlast \
				ft_lstadd_back \
				ft_lstdelone \
				ft_lstclear \
				ft_lstiter \
				ft_lstmap

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_B = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_BONUS)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_BONUS)))


.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

bonus: $(OBJS_B)
	$(AR) $(NAME) $^

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: bonus all clean fclean re