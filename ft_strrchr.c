/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fharifen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:21:21 by fharifen          #+#    #+#             */
/*   Updated: 2024/02/27 10:11:53 by fharifen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	cc;
	char	*p;

	i = 0;
	cc = (char)c;
	p = NULL;
	while (s[i])
	{
		if (s[i] == cc)
			p = (char *)&s[i];
		i++;
	}
	if (s[i] == cc)
		p = (char *)&s[i];
	return (p);
}
