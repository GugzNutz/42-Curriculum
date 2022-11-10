/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:50:57 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/10 10:09:55 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*s2 == '\0' || s2 == NULL)
		return ((char *) s1);
	while (s1[i] != '\0' && i < len)
	{
		j = 0;
		while (s2[j] == s1[i + j] && i + j < len)
		{
			if (s2[j + 1] == '\0')
			{
				return ((char *) s1 + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
