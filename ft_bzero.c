/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphimsir <sphimsir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:13:54 by sphimsir          #+#    #+#             */
/*   Updated: 2023/04/02 10:57:27 by sphimsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	char			*b;

	i = 0;
	b = s;
	while (i < n)
		b[i++] = 0;
}
