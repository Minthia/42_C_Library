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

#include "../../includes/libft.h"

char	*ft_strcdup(const char *src, int c)
{
	char	*dst;

	if (!(dst = ft_strnew(ft_strclen(src, c))))
		return (NULL);
	return (ft_strccpy(dst, src, c));
}
