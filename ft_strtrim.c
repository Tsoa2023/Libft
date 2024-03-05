/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fharifen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:20:02 by fharifen          #+#    #+#             */
/*   Updated: 2024/02/29 15:39:53 by fharifen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trim(const char *set, char c)
{
	size_t			i;
	unsigned char	cc;

	i = 0;
	cc = (unsigned char)c;
	while (set[i])
	{
		if ((unsigned char)set[i] == cc)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = NULL;
	if (!s1 && !set)
		return (ft_strdup(""));
	i = 0;
	while (ft_trim(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (ft_trim(set, s1[j]))
		j--;
	if (i > j)
		return (NULL);
	str = ft_substr(s1, i, (j - i) + 1);
	return (str);
}
