/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphimsir <sphimsir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 10:57:27 by sphimsir          #+#    #+#             */
/*   Updated: 2023/03/06 15:07:57 by sphimsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
// #define SIZE_MAX          UINTPTR_MAX
// #if __LP64__
// #define __WORDSIZE 64
// #else
// #define __WORDSIZE 32
// #endif
// #if __WORDSIZE == 64
// #define UINTPTR_MAX       18446744073709551615UL
// #else
// #define UINTPTR_MAX       4294967295UL
// #endif
# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_isalnum(int c);
char	*ft_strdup(const char *src);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	ft_bzero(void *s, size_t n);
int		ft_atoi(const char *s);

#endif