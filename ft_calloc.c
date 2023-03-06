/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphimsir <sphimsir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 22:09:54 by sphimsir          #+#    #+#             */
/*   Updated: 2023/03/06 15:07:59 by sphimsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*m;
	size_t	i;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	m = malloc(count * size);
	if (m == NULL)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		m[i] = 0;
		i++;
	}
	return (m);
}
