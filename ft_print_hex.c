/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 02:18:38 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/12/11 08:37:46 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_hex(unsigned int value, size_t n)
{
	char	*base;
	char	hex[sizeof(int) * 2];
	int		i;

	i = 7;
	base = "0123456789abcdef";
	while (value > 0)
	{
		hex[i] = base[value % 16];
		value /= 16;
		i--;
	}
	while (i >= (8 - (int)n) && i >= 0)
		hex[i--] = '0';
	while (i < 8)
		ft_putchar(hex[i++]);
}
