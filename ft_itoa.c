/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:38:13 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/11/11 11:10:48 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_itoa_len(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	size_t			len;
	char			*s;
	unsigned int	pos_n;

	len = ft_itoa_len(n);
	if (n < 0)
		len++;
	if (!(s = ft_strnew(len)))
		return (NULL);
	pos_n = ft_abs(n);
	s[--len] = pos_n % 10 + '0';
	while (pos_n /= 10)
		s[--len] = pos_n % 10 + '0';
	if (n < 0)
		s[0] = '-';
	return (s);
}
