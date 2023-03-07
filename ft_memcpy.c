/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphimsir <sphimsir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:09:56 by sphimsir          #+#    #+#             */
/*   Updated: 2023/03/07 21:39:40 by sphimsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*dp;
	const char	*sp;

	dp = dst;
	sp = src;
	if (!dst && !src)
		return (NULL);
	while (n--)
		*(char *)dp++ = *sp++;
	return (dst);
}
