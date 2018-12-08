/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:28:59 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/11/10 14:46:26 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*map;
	int		i;

	if (!s || !f || !(map = ft_strnew(ft_strlen(s))))
		return (NULL);
	i = -1;
	while (s[++i])
		map[i] = f(i, s[i]);
	return (map);
}
