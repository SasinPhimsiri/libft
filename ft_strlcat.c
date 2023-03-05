/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphimsir <sphimsir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:00:10 by sphimsir          #+#    #+#             */
/*   Updated: 2023/03/05 14:06:16 by sphimsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_d;

	if (dst == NULL && dstsize <= 0)
		return ((size_t) NULL);
	if (dstsize <= 0)
		return (ft_strlen(src));
	len_d = ft_strlen(dst);
	i = ft_strlen(dst);
	j = 0;
	while (src[j] && i < dstsize - 1)
		dst[i++] = src[j++];
	if (dstsize < len_d)
		return (ft_strlen(src) + dstsize);
	dst[i] = '\0';
	return (len_d + ft_strlen(src));
}
