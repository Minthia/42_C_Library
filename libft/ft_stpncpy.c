/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stpncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 02:56:53 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/12/11 08:39:28 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_stpncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
	{
		if (src[i])
			dst[i] = src[i];
		else
		{
			while (i < n)
				dst[i++] = '\0';
		}
	}
	return (&dst[i]);
}
