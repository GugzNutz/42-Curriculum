/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:03:10 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/16 17:52:39 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// . is a member operator, -> is a structure pointer operator
t_list	*ft_lstnew(void *content)
{
	t_list	*file;

	file = (t_list *)malloc(sizeof(t_list));
	if (file == NULL)
		return (NULL);
	//see neso academy video 150 forward about structures
	*file->content = (void *)content;
	file->next = NULL;
	return (file);
}
