/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin_free.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 00:33:18 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/12/11 08:44:55 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnjoin_free(const char *s1, const char *s2, size_t n)
{
	char	*tmp;

	tmp = (char *)s1;
	s1 = ft_strnjoin(s1, s2, n);
	free(tmp);
	return ((char *)s1);
}
