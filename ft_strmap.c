/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:41:27 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/11/11 11:09:43 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*map;
	int		i;

	if (!s || !f || !(map = ft_strnew(ft_strlen(s))))
		return (NULL);
	i = -1;
	while (s[++i])
		map[i] = f(s[i]);
	return (map);
}
