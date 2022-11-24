/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:24:55 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/24 15:14:54 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Tive de criar uma lista temporaria para nao alterar valores na original
enquanto a lista nao chegar ao fim ele percorre-a,
quando chegar ao fim, antes do NULL diz que a
proxima posicao na lista e o new*/
void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *temp;

	if(lst)
	{
		if (*lst == NULL)
		{
			*lst = new;
			return ;
		}
		temp = *lst;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
}
