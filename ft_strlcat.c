/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:26:15 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/08 17:07:13 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_lenght;
	size_t	src_lenght;
	
	i = 0;
	j = ft_strlen(dest);
	dest_lenght = ft_strlen(dest);
	src_lenght =ft_strlen(src);
	if (dest_lenght >= size || size == 0)
		dest_lenght = size;
	if (dest_lenght < size - 1 && size > 0)
	{
		while (i < ft_strlen(src) && i < size - dest_lenght - 1)
		{
			dest[j] = src[i];
			i++;
			j++;
		}
		dest[j] = '\0';
	}
	return (dest_lenght + src_lenght);
}
