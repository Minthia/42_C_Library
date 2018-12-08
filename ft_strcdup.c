/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 10:06:33 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/11/11 10:25:24 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strcdup(const char *src, char c)
{
	char	*dst;
	size_t	i;

	i = 0;
	if (!src && !src[i])
		return (NULL);
	while (src[i] && src[i] != c)
		i++;
	if (!(dst = ft_strsub(src, 0, i)))
		return (NULL);
	return (dst);
}
