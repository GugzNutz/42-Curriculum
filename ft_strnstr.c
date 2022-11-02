/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:50:57 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/02 17:39:20 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	if (*s2 == 0)
	return ((char *)s1);

	i = 0;
	j = 0;
	while(s1[i] && i < len)
	{
			
		while (s1[i + j] == s2[j] && s2[j])
		{
			j++;
		}
		if ((j == ft_strlen(s2))
			return ((char *)s1 + i);
		j = 0;
		i++;
	}
	return (0);
}
