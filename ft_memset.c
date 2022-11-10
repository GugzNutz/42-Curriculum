/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:17:08 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/10 10:59:27 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	if (n <= 0)
		return (s);
	str = (unsigned char *) s;
	while (n > 0)
	{
		*str++ = (unsigned char)c;
		n--;
	}
	return (s);
}
