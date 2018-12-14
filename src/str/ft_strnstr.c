/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 22:19:47 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/11/22 18:40:43 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strnstr(const char *s, const char *to_find, size_t n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*to_find == 0)
		return ((char *)s);
	while (s[i])
	{
		j = 0;
		while (s[i + j] == to_find[j] && to_find[j] && (size_t)(i + j) < n)
			j++;
		if (to_find[j] == '\0')
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
