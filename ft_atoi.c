/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crender <crender@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:26:41 by crender           #+#    #+#             */
/*   Updated: 2021/10/19 14:35:01 by crender          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	result;
	long int	i;

	i = 1;
	result = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'\
	|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			i = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + i * (*str - '0');
		if (i < 0 && result > 0)
			return (0);
		if (i > 0 && result < 0)
			return (-1);
		str++;
	}
	return (result);
}
