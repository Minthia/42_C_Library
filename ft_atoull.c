/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoull.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 02:30:43 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/12/08 02:30:44 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long long		ft_atoull(const char *s)
{
	unsigned long long	ret;
	int					sign;

	ret = 0;
	sign = 1;
	while ((*s >= 9 && *s <= 13) || *s == 32) s++;
	if (*s == '-')
		sign = -1;
	if (*s == '-' || *s == '+')
		s++;
	while (ft_isdigit(*s))
	{
		ret = ret * 10 + *s - 48;
		s++;
	}
	return (ret * sign);
}