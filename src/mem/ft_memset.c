/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:45:57 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/12/11 08:03:24 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	long		*ptr;
	char		*ptr2;
	long		data;
	size_t		i;

	c = (unsigned char)c;
	data = ((long)c << 56) + ((long)c << 48) + ((long)c << 40) + \
	((long)c << 32) + (c << 24) + (c << 16) + (c << 8) + c;
	ptr = (long *)ptr;
	i = 0;
	while (n >= sizeof(long))
	{
		*ptr++ = data;
		n -= sizeof(long);
	}
	ptr2 = (char*)ptr;
	while (n)
	{
		*ptr2++ = c;
		n--;
	}
	return (ptr);
}
