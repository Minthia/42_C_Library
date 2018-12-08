/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:57:25 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/11/11 11:20:27 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t n)
{
	void	*ret;

	if (!(ret = (void *)malloc(n)))
		return (NULL);
	ft_bzero(ret, n);
	return (ret);
}
