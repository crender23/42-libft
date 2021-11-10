/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crender <crender@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 09:23:55 by crender           #+#    #+#             */
/*   Updated: 2021/10/20 21:04:35 by crender          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*string;
	size_t	new;

	if (!s)
		return (NULL);
	i = 0;
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if ((start + len) < ft_strlen(s))
		new = len;
	else
		new = ft_strlen(s) - start;
	string = (char *)malloc(sizeof(char) * (new + 1));
	if (string == NULL)
		return (NULL);
	while (i < new && s[start] != '\0')
	{
		string[i] = s[start + i];
		i++;
	}		
	string[i] = '\0';
	return (string);
}
