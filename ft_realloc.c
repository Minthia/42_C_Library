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
#include "libft.h"

void	*ft_realloc(void *ptr, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char*)malloc(n);
	if (tmp != NULL)
	{
		ft_memmove(tmp, ptr, n);
		free(ptr);
	}
	return (tmp);
}
