/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:39:13 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/30 17:34:48 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*sub;
	t_list	*new;

	/*if (!lst || !del || !f)
		return ;*/
	if (lst == NULL)
		return (NULL);
	new = 0;
	while (lst != NULL)
	{
		sub = ft_lstnew(f(lst->content));
		if (sub == NULL)
		{
			ft_lstclear(&sub, del);
			return (NULL);
		}
		ft_lstadd_back(&new, sub);
		lst = lst->next;
	}
	return (new);
}

	/*t_list	*first;
	t_list	*new;

	if (!f || !del)
		return (NULL);
	first = NULL;
	while (lst)
	{
		if (!(new = ft_lstnew((*f)(lst->content))))
		{
			while (first)
			{
				new = first->next;
				(*del)(first->content);
				free(first);
				first = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}
*/