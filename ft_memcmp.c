/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crender <crender@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:58:15 by crender           #+#    #+#             */
/*   Updated: 2021/10/15 02:18:12 by crender          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*si;
	unsigned char	*sh;

	si = (unsigned char *)s1;
	sh = (unsigned char *)s2;
	while (n--)
	{
		if (*si != *sh)
			return (*si - *sh);
		si++;
		sh++;
	}
	return (0);
}
