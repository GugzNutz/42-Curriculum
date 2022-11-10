/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:17:01 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/10 10:15:20 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	int				i;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (s == NULL && d == NULL)
		return (NULL);
	while (n > 0)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (dest);
}
