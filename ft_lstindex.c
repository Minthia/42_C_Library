/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstindex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 01:46:16 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/12/11 08:34:34 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstindex(t_list *lst, size_t index)
{
	size_t i;

	i = 0;
	if (!lst)
		return (NULL);
	while (lst && i < index)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
