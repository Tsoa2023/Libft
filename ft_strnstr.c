/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fharifen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:53:03 by fharifen          #+#    #+#             */
/*   Updated: 2024/02/27 11:38:46 by fharifen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	count;
	size_t	l_len;

	l_len = ft_strlen(little);
	if (little[0] == 0)
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		count = 0;
		j = 0;
		while (little[j] && (i + j) < len)
		{
			if (big[i + j] == little[j])
				count ++;
			if (count == l_len)
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
