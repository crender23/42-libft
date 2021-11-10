/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crender <crender@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:54:50 by crender           #+#    #+#             */
/*   Updated: 2021/10/21 20:00:15 by crender          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	i;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		i = (n % 10) + '0';
		write(fd, &i, 1);
	}
	else if (n >= 0 && n < 10)
	{
		i = n + '0';
		write(fd, &i, 1);
	}
	else
	{
		write(fd, "-", 1);
		ft_putnbr_fd(-n, fd);
	}
}
