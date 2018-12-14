/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 22:15:13 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/12/11 08:12:40 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t		ft_wordlen(char const *s, char c)
{
	size_t		wordlen;

	wordlen = 0;
	if (*s)
	{
		while (*s == c)
			s++;
		while (*s && *s != c)
		{
			s++;
			wordlen++;
		}
	}
	return (wordlen);
}
