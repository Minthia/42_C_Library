/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 16:07:56 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/11/15 17:36:38 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../../includes/libft.h"

static char		**free_tab(char **tab, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char	**ft_strsplit(const char *s, char c)
{
	char	**tab;
	size_t	i;
	int		j;

	i = -1;
	j = 0;
	if (!s)
		return (NULL);
	if (!(tab = (char**)malloc(sizeof(char*) * ((ft_wordscount(s, c) + 1)))))
		return (NULL);
	while (++i < ft_wordscount(s, c))
	{
		while (s[j] == c)
			j++;
		if (!(tab[i] = ft_strsub(s, j, ft_wordlen(&s[j], c))))
			return (free_tab(tab, i));
		while (s[j] != c && s[j])
			j++;
	}
	tab[i] = NULL;
	return (tab);
}
