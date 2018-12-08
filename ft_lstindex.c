/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstindex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 01:46:16 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/12/08 01:46:18 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

t_list	*ft_lstindex(t_list *lst, size_t idx)
{
	size_t i;

	i = 0;
	if (!st)
		return (NULL);
	while (lst && i < idx)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
