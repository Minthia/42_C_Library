/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 22:19:47 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/11/11 10:54:14 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *s, const char *to_find, size_t n)
{
	if (*to_find == 0)
		return ((char *)s);
	while (*s && (s + ft_strlen(to_find) <= n))
	{
		if (ft_strncmp(s, to_find, ft_strlen(to_find)) == 0)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
