/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:21:39 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/11/11 11:08:01 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(const char *s)
{
	size_t	i;
	size_t	j;
	char	*trim;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen(s);
	while (*s && (ft_isblank(s[i])))
		i++;
	while (ft_isblank(s[j - 1]) && j > 0)
		j--;
	if (i == ft_strlen(s))
		return (ft_strdup(s + i));
	if ((trim = ft_strsub(s, i, j - i)))
		return (trim);
	else
		return (NULL);
}
