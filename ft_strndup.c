/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 23:03:38 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/11/11 10:23:33 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strndup(const char *src, size_t n)
{
	char	*dst;

	if (!(dst = ft_strnew(n)))
		return (NULL);
	ft_strncpy(dst, src, n);
	return (dst);
}
