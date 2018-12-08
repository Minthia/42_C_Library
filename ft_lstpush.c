/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 23:18:55 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/12/07 23:18:57 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_listpush(t_list **begin_list, t_list *elem)
{
	t_list	*new;

	if (!(*begin_list))
		*begin_list = elem;
	else
	{
		new = *begin_list;
		while (new->next)
			new = new->next;
		new->next = elem;
	}
}