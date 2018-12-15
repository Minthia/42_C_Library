/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 13:24:49 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/12/15 13:24:51 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t	ft_strclen(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (*str && str[i] && str[i] != (unsigned char)c)
		i++;
	return (i);
}
