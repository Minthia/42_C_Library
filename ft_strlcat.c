/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:25:43 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/11/11 10:31:28 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t		i;
	size_t		j;
	size_t		dst_len;
	size_t		src_len;

	i = ft_strlen(dst);
	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (n < dst_len)
		return (src_len + n);
	if (n > dst_len)
	{
		while (i < n - 1)
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	return (dst_len + src_len);
}
