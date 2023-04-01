/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphimsir <sphimsir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 12:31:16 by sphimsir          #+#    #+#             */
/*   Updated: 2023/04/01 16:20:56 by sphimsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	n_node;

	n_node = 0;
	while (lst)
	{
		n_node++;
		lst = lst->next;
	}
	return (n_node);
}
