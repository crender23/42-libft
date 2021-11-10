/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crender <crender@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:55:57 by crender           #+#    #+#             */
/*   Updated: 2021/10/20 05:44:51 by crender          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*lil;
	char	*lar;
	size_t	ndl_size;
	size_t	i;
	size_t	g;

	i = 0;
	ndl_size = ft_strlen(needle);
	lil = (char *)needle;
	lar = (char *)haystack;
	if (*lil == 0)
		return ((char *)haystack);
	while (len > i && lar[i])
	{
		g = 0;
		while (lar[i + g] == lil[g] && len > (i + g))
		{
			if (g == (ndl_size - 1))
				return (lar + i);
			g++;
		}
		i++;
	}
	return (NULL);
}
