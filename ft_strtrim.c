/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crender <crender@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:07:55 by crender           #+#    #+#             */
/*   Updated: 2021/10/25 17:32:04 by crender          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*mem;
	int		s;
	int		i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	s = ft_strlen(s1);
	i = s;
	while (s && ft_strchr(set, s1[s]))
		s--;
	mem = malloc((i - (i - s) + 2) * sizeof(char));
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (*s1 && s >= 0)
	{
		mem[i] = *s1;
		s1++;
		i++;
		s--;
	}
	mem[i] = '\0';
	return (mem);
}
