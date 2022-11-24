/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:02:53 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/23 18:52:34 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*nao podemos usar new.next porque new nao e uma struct
no entanto podemos fazer como na lstnew, primeiro dereferenciamos
 o pointer new e depois acedemos ao membro next
 ou seja (*new).next e igual a new->next e 
 supostamente seria igual a new.next
 a ideia e que na minha nova new no membro next
 ele vai ter o valor de lst que na verdade
 vai ser o valor de new*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL)
	{
		if (*lst != NULL)
			(*new).next = *lst;
		*lst = new;
	}
}
