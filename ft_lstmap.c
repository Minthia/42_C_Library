/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 09:30:02 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/12/11 08:59:19 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new;
	t_list		*flst;

	if (!lst)
		return (NULL);
	flst = f(lst);
	new = flst;
	while (lst->next)
	{
		lst = lst->next;
		if (!(flst->next = f(lst)))
		{
			free(flst->next);
			return (NULL);
		}
		flst = flst->next;
	}
	return (new);
}
