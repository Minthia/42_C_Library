/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:50:04 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/11/11 11:06:09 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t n)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!s || !(sub = ft_strnew(n)))
		return (NULL);
	while (i < n)
		sub[i++] = s[start++];
	return (sub);
}
