/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crender <crender@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:28:45 by crender           #+#    #+#             */
/*   Updated: 2021/10/21 16:34:18 by crender          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;
	int		length;
	int		i;

	i = 0;
	length = ft_strlen(src);
	dst = malloc(sizeof(*src) * length + 1);
	if (dst == NULL)
		return (NULL);
	while (i <= length)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
