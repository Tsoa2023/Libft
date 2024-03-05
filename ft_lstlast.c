/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fharifen <fiononana.hari@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 09:09:01 by fharifen          #+#    #+#             */
/*   Updated: 2024/02/28 15:21:55 by fharifen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *list)
{
	t_list	*tmp;

	tmp = list;
	if (!list)
		return (NULL);
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}
