/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphimsir <sphimsir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 15:38:19 by sphimsir          #+#    #+#             */
/*   Updated: 2023/03/26 21:23:16 by sphimsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_all_free(char **str, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static char	*ft_copy_word(char const *s, char c)
{
	size_t	n_str;
	char	*word;

	n_str = 0;
	while (*s && *s != c)
	{
		n_str++;
		s++;
	}
	word = malloc(sizeof(char) * (n_str + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s - n_str, n_str + 1);
	return (word);
}

size_t	ft_count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	n_word;
	char	**str;

	if (!s)
		return (NULL);
	n_word = ft_count_word(s, c);
	str = malloc(sizeof(char *) * (n_word + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < n_word)
	{
		while (*s && *s == c)
			s++;
		str[i] = ft_copy_word(s, c);
		if (!str[i])
			return (ft_all_free(str, i));
		while (*s && *s != c)
			s++;
		i++;
	}
	str[i] = NULL;
	return (str);
}
