/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 22:51:13 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/11/11 09:12:03 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *new;
	t_list *tmp;

	if (!(*alst) || !alst || !del)
		return ;
	new = *alst;
	while (next)
	{
		tmp = new;
		new = new->next;
		del(tmp->content, tmp->content_size);
		free(tmp);
	}
	*alst = NULL;
}