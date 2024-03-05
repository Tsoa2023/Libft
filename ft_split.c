/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fharifen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 08:47:34 by fharifen          #+#    #+#             */
/*   Updated: 2024/02/29 15:35:41 by fharifen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *s, char c)
{
	int		count;
	size_t	i;
	int		j;

	j = 0;
	count = 1;
	i = 0;
	while (s[j])
	{
		if (s[j] != c && i == 0)
		{
			count++;
			i = 1;
		}
		else if (s[j] == c)
			i = 0;
		j++;
	}
	return (count);
}

static void	*ft_free(char **s, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

static char	**ft_push_word(char **res, char const *s, char c)
{
	size_t	i;
	int		start;
	int		j;

	i = 0;
	j = 0;
	start = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			res[j] = ft_substr(s, start, i - start);
			if (!res[j])
				return (ft_free(res, j));
			start = -1;
			j++;
		}
		i++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = ft_calloc(count_word(s, c), sizeof(char *));
	if (!res)
		return (NULL);
	res = ft_push_word(res, s, c);
	return (res);
}
