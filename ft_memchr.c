/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crender <crender@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:30:41 by crender           #+#    #+#             */
/*   Updated: 2021/10/25 17:30:36 by crender          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	b;
	unsigned char	*p;

	b = (unsigned char)c;
	p = (unsigned char *)s;
	while (n && (*p != b))
	{
		p++;
		n--;
	}
	if (!n)
		return (NULL);
	return (p);
}
