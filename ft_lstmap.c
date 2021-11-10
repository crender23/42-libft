/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crender <crender@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:12:59 by crender           #+#    #+#             */
/*   Updated: 2021/10/25 16:56:06 by crender          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_one;
	t_list	*temp_one;

	if (lst == NULL)
		return (NULL);
	new_one = NULL;
	while (lst != 0)
	{
		if (lst->content != NULL)
		{
			temp_one = ft_lstnew(f(lst->content));
			ft_lstadd_back(&new_one, temp_one);
		}
		else
			ft_lstclear(&new_one, del);
		lst = lst->next;
	}
	return (new_one);
}
