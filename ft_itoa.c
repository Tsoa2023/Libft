/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fharifen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 10:57:24 by fharifen          #+#    #+#             */
/*   Updated: 2024/02/27 15:40:36 by fharifen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_nbr(int n)
{
	int	count;

	count = 0;
	if (n < 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	*empty(void)
{
	char	*str;

	str = malloc(sizeof(char) * 2);
	if (!str)
		return (NULL);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		len_nbr;
	long	nbr;

	len_nbr = count_nbr(n);
	if (n == 0)
		return (empty());
	s = ft_calloc(len_nbr + 1, sizeof(char));
	if (!s)
		return (NULL);
	nbr = n;
	if (nbr < 0)
		nbr = -nbr;
	i = len_nbr - 1;
	while (i >= 0)
	{
		s[i] = (nbr % 10) + 48;
		nbr = nbr / 10;
		i--;
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}
