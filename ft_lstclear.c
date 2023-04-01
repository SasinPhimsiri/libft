/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphimsir <sphimsir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:25:46 by sphimsir          #+#    #+#             */
/*   Updated: 2023/04/01 16:20:35 by sphimsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current_node;
	t_list	*next;

	if (!lst || !del)
		return ;
	current_node = *lst;
	while (current_node)
	{
		next = current_node->next;
		del(current_node->content);
		free(current_node);
		current_node = next;
	}
	*lst = NULL;
}
