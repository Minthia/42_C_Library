/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush_alloc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 01:53:48 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/12/08 01:53:49 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstpush_alloc(t_list **begin_list, void *content, int content_size)
{
	t_list	*new;

	if (!(*begin_list))
	{
		*begin_list = ft_lstnew(content, content_size);
		return (*begin_list);
	}
	else
	{
		new = *begin_list;
		while (new->next)
			new = new->next;
		new->next = ft_lstnew(content, content_size);
	}
	return (new->next);
}
