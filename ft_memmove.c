/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:17:05 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/03 15:09:51 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	char		*temp;
	int			i;
	int			j;

	d = (char *) dest;
	s = (const char *) src;
	i = 0;
	j = (int)n;
	temp = (char *) s;
	while (i < j)
	{
		temp[i] = s[i];
		i++;
	}
	i = 0;
	while (i < j)
	{
		temp[i] = d[i];
		i++;
	}
	return (d);
}
