/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphimsir <sphimsir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:02:37 by sphimsir          #+#    #+#             */
/*   Updated: 2023/03/06 16:25:33 by sphimsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	count_needle;

	if ((haystack == NULL || needle == NULL) && len <= 0)
		return (NULL);
	if (haystack == needle)
		return ((char *)haystack);
	count_needle = ft_strlen(needle);
	while (*haystack && count_needle <= len--)
	{
		if (!(ft_strncmp((char *)haystack, (char *)needle, count_needle)))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
