/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crender <crender@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 20:41:48 by crender           #+#    #+#             */
/*   Updated: 2021/10/23 22:02:37 by crender          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	size_n(long n)
{
	int	size;

	size = 0;
	if (n <= 0)
	{
		n *= -1;
		size++;
	}
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	long	numb;

	numb = n;
	i = size_n(numb);
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	res[i] = '\0';
	if (numb == 0)
		res[0] = '0';
	if (numb < 0)
	{
		res[0] = '-';
		numb *= -1;
	}
	while (numb > 0)
	{
		i--;
		res[i] = (numb % 10) + '0';
		numb /= 10;
	}
	return (res);
}
