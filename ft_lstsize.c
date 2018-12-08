/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 22:54:31 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/11/08 22:54:52 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_lstsize(t_list *lst)
{
	size_t	size;

	if (!lst)
		return (NULL);
	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
