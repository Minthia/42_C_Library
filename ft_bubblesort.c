/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubblesort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 09:15:28 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/11/11 09:36:10 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bubblesort(int **tab, size_t n)
{
	size_t	i;
	int		bool_sort;
	char	*tmp;

	bool_sort = 0;
	while (!sort)
	{
		bool_sort = 1;
		i = -1;
		while (++i < n - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_xorswap(tab[i], tab[i + 1]);
				bool_sort = 0;
			}
		}
	}
}
