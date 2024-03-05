/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fharifen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:41:57 by fharifen          #+#    #+#             */
/*   Updated: 2024/03/05 08:27:39 by fharifen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest,const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (len_dest >= size)
		len_dest = size;
	if (size == len_dest)
		return (size + len_src);
	if (len_src < size - len_dest)
	{
		ft_memcpy(dest + len_dest, src, len_src + 1);
	}
	else
	{
		ft_memcpy(dest + len_dest, src, size - len_dest - 1);
		dest[size - 1] = '\0';
	}
	return (len_dest + len_src);
}
