/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:42:19 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/12/11 08:48:44 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strstr(const char *s, const char *to_find)
{
	if (*to_find == 0)
		return ((char *)s);
	while (*s)
	{
		if (ft_strncmp(s, to_find, ft_strlen(to_find)) == 0)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
