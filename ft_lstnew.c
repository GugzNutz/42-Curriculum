/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:03:10 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/23 16:43:19 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* . is a member operator that we use if we want to 
acess the members of the structure
-> is a structure pointer operator*/
t_list	*ft_lstnew(void *content)
{
	t_list	*file;

	file = (t_list *)malloc(sizeof(*file));
	if (file == NULL)
		return (NULL);
	file->content = content;
	file->next = NULL;
	return (file);
}
