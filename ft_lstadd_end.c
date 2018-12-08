/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 22:52:23 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/12/07 22:52:24 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_lstadd_end(t_list **alst, t_list *new)
{
	t_list *tmp;

	if (!(*alst) || !alst || !new)
		return ;
	tmp = *alst;
	if (!tmp)
	{
		*alst = new;
		new->next = NULL;
	}
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
		new->next = NULL;
	}
}
