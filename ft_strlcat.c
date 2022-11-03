/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:26:15 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/03 12:26:23 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int	i;
	int	j;
	int	src_lenght;
	int	dest_lenght;

	dest_lenght = ft_strlen(dest);
	src_lenght = ft_strlen((char *)src);
	i = 0;
	j = dest_lenght;
	if (j >= 1)
	{
		while (j >= 1 && i > (int)size - j - 1)
		{
			dest[j] = src[i];
			i++;
			j++;
		}
		dest[j] = '\0';
	}
	return (dest_lenght + src_lenght);
}
