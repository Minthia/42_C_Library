/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:24:25 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/12/11 08:06:28 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t n)
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
	return (dst);
}
