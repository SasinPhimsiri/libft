/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphimsir <sphimsir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 12:39:54 by sphimsir          #+#    #+#             */
/*   Updated: 2023/03/26 15:28:51 by sphimsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	idx_start;
	size_t	idx_stop;

	if (!s1 || !set)
		return (NULL);
	idx_start = 0;
	idx_stop = ft_strlen(s1);
	while (ft_strchr(set, s1[idx_start]) != NULL)
	{
		if (idx_start == idx_stop)
			return (ft_strdup(""));
		idx_start++;
	}
	while (ft_strchr(set, s1[idx_stop]) != NULL)
		idx_stop--;
	return (ft_substr(s1, idx_start, idx_stop - idx_start + 1));
}
