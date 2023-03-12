# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sphimsir <sphimsir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 11:09:33 by sphimsir          #+#    #+#              #
#    Updated: 2023/03/11 21:49:30 by sphimsir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES = ft_strlen \
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
		ft_substr



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