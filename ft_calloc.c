/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphimsir <sphimsir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 22:09:54 by sphimsir          #+#    #+#             */
/*   Updated: 2023/03/06 16:54:29 by sphimsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*m;

	if (count >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	m = malloc(count * size);
	if (m == NULL)
		return (NULL);
	ft_memset(m, 0, count * size);
	return (m);
}
