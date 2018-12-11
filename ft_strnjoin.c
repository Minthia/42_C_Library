/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 00:25:51 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/12/11 08:41:19 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnjoin(const char *s1, const char *s2, size_t n)
{
	char	*s;

	if (!s1 || !s2 || !(s = ft_strnew(ft_strlen(s1) + ft_strlen(s2) \
		- (ft_strlen(s2) - n))))
		return (NULL);
	ft_strcat(s, s1);
	ft_strncat(s, s2, n);
	return (s);
}
