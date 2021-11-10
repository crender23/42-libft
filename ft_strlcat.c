/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crender <crender@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 23:41:50 by crender           #+#    #+#             */
/*   Updated: 2021/10/21 16:34:08 by crender          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_length;
	size_t	src_length;

	if (!dst && !src)
		return (0);
	i = 0;
	while ((i < size) && (dst[i] != 0))
		i++;
	src_length = ft_strlen((char *)src);
	if (dst[i] != 0)
		return (src_length + i);
	else
		dst_length = src_length + i;
	while (((i + 1) < size) && *src != 0)
		dst[i++] = *src++;
	dst[i] = 0;
	return (dst_length);
}
