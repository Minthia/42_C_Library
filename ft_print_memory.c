/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 02:22:47 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/12/11 08:38:09 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print_hex_char(unsigned char c)
{
	const char	*base;

	base = "0123456789abcdef";
	ft_putchar(base[c / 16]);
	ft_putchar(base[c % 16]);
}

static void	print_hex_line(unsigned char *tmp, unsigned char *end)
{
	unsigned int i;

	i = 0;
	ft_print_hex((unsigned int)tmp, 8);
	ft_putchar(':');
	ft_putchar(' ');
	while (i < 16)
	{
		if (tmp + i < end)
			print_hex_char(tmp[i]);
		else
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		if (i % 2 == 1)
			ft_putchar(' ');
		i++;
	}
}

void		*ft_print_memory(void *addr, unsigned int n)
{
	unsigned char	*tmp;
	unsigned char	*end;
	unsigned int	i;

	tmp = (unsigned char*)addr;
	end = tmp + n;
	while (tmp < end)
	{
		print_hex_line(tmp, end);
		i = 0;
		while (i < 16 && tmp + i < end)
		{
			if (!ft_isprint(tmp[i]))
				ft_putchar('.');
			else
				ft_putchar(tmp[i]);
			i++;
		}
		ft_putchar('\n');
		tmp += 16;
	}
	return (addr);
}
