/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphimsir <sphimsir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 11:43:59 by sphimsir          #+#    #+#             */
/*   Updated: 2023/03/05 21:52:58 by sphimsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	len_src;

	len_src = ft_strlen(src);
	dest = (char *)malloc(len_src + 1);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, src, len_src + 1);
	dest[len_src] = '\0';
	return (dest);
}
