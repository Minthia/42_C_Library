/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 01:59:30 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/12/08 01:59:31 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../../includes/libft.h"


void	*ft_realloc(void *ptr, size_t oldsize, size_t newsize)
{
	void	*ptr;

	tmp = malloc(newsize);
	if (oldsize)
	{
		ft_memcpy(tmp, ptr, oldsize);
		free(ptr);
	}
	return (tmp);
}