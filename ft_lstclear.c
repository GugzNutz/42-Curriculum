/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:23:09 by gfilipe-          #+#    #+#             */
/*   Updated: 2023/01/04 12:39:02 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*sub;

	if (!lst || !del)
		return ;
	temp = *lst;
	sub = *lst;
	while (temp)
	{
		sub = sub->next;
		(*del)(temp->content);
		free(temp);
		temp = sub;
	}
	*lst = NULL;
}
