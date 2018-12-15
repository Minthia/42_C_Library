/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 13:28:34 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/12/15 13:28:55 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strccpy(char *dest, const char *src, int c)
{
	int	i;

	i = 0;
	while (*src && src[i] && src[i] != (unsigned char)c)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
